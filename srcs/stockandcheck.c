/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stockandcheck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:39:53 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/13 23:34:01 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

#define $BR exit (0);

int	ft_argisvalid(char **argv)
{
	t_param	param;

	param.j = 0;
	param.i = 0;
	if (argv == NULL)
		return (0);
	while (argv[++param.j])
	{	
		if ((argv[param.j][0] == '-' || argv[param.j][0] == '+')
			&& param.i == 0)
		{
			param.i = 1;
			if (ft_isdigit(argv[param.j][param.i]) == 0)
				return (-1);
		}
		while (argv[param.j][param.i])
		{
			if (ft_isdigit(argv[param.j][param.i]) == 0)
				return (-1);
			param.i++;
		}
		param.i = 0;
	}
	return (0);
}

int	*check_format(int *ret, int size)
{
	//if checkdouble && check...
	//	return (-1);
	return (ret);
}

int	*argv_to_tab(char **argv, int size)
{
	int		*ret;
	int		i;

	i = 0;
	ret = malloc(sizeof(int) * size);
	if (!ret)
		return (0);
	while (argv[i])
	{
		ret[i] = ft_atoi(argv[i]);
		i++;
	}
	return (check_format(ret, size));
}

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

int	ft_check_input(int argc, char **argv)
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
	return (0);
}
