/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stockandcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:39:53 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/07 19:28:49 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	create_tabs(t_param *param, int argc, char **argv)
{
	if (argc < 3)
	{
		ft_putstr_fd("Error\n", 2);
		return (EMPTY_ARG);
	}
	param->numbers_a = argv_to_tab(argv + 1, param->size_a);
	if (!param->numbers_a)
	{
		ft_putstr_fd("Error\n", 2);
		return (INPUT_ERROR);
	}
	if (param->numbers_a)
		param->copy_a = argv_to_tab(argv + 1, param->size_a);
	param->numbers_b = (long int *)malloc(sizeof(long int) * (param->size_a));
	if (!(param->numbers_b))
	{
		ft_putstr_fd("Error\n", 2);
		return (MALLOC_ERROR);
	}
	return (0);
}

long int	*check_format(long int *tab, int size)
{
	if (ft_checkdouble(tab, size) < 0 || ft_maxandmin(tab, size) < 0)
	{
		free(tab);
		return (NULL);
	}
	return (tab);
}

int	ft_argisvalid(char *argv)
{
	t_param	param;

	param.i = 0;
	if (argv == NULL)
		return (0);
	while (argv[param.i])
	{	
		if (ft_issign(argv[param.i]) == 1 && param.i == 0)
		{
			param.i = 1;
			if (ft_isdigit(argv[param.i]) == 0)
				return (-1);
		}
		while (argv[param.i])
		{
			if (ft_isdigit(argv[param.i]) == 0)
				return (-1);
			param.i++;
		}
	}
	return (0);
}

long int	*argv_to_tab(char **argv, int size)
{
	long int	*tab;
	int			i;

	i = 0;
	tab = (long int *)malloc(sizeof(long int) * size);
	if (!tab)
		return (0);
	while (argv[i])
	{
		if (ft_argisvalid(argv[i]) == 0)
		{
			tab[i] = ft_atoi(argv[i]);
			i++;
		}
		else
		{
			free(tab);
			return (NULL);
		}
	}
	return (check_format(tab, size));
}
