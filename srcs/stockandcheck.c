/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stockandcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:39:53 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/16 16:44:55 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

int	ft_argisvalid(char *argv)
{
	t_param	param;

	param.i = 0;
	if (argv == NULL)
		return (0);
	while (argv[param.i])
	{	
		if ((argv[0] == '-' || argv[0] == '+')
			&& param.i == 0)
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

// int	*check_format(int *tab, int size)
// {
// 	if (ft_checkdouble(tab, size) =! 0 && check...)
// 		return (-1);
// 	return (tab);
// }

int	*argv_to_tab(char **argv, int size)
{
	int		*tab;
	int		i;

	i = 0;
	tab = (int *)malloc(sizeof(int) * size);
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
			return (0);
		}
	}
	return (check_format(tab, size));
}

int	ft_stockandcheck(int argc, char **argv)
{
	t_param	param;

	if (!(argc >= 3))
		return (EMPTY_ARG);
	param.numbers = argv_to_tab(argv + 1, argc - 1);
	if (!param.numbers)
	{
		ft_putstr_fd("error\n", 1);
		return (INPUT_ERROR);
	}
	print_tab(param.numbers, argc - 1);
	free(param.numbers);
	return (0);
}
