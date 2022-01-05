/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:00:48 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/05 17:28:03 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_issign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	minforassign(long int *tab, int size, int min)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

int	whoismin(long int *tab, int size)
{
	int	i;
	int	min;

	i = 0;
	min = 2147483647;
	while (i < size)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

int	whoismax(long int *tab, int size)
{
	int	i;
	int	max;

	i = 0;
	max = -2147483648;
	while (i < size)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

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
	param->numbers_b = (long int *)malloc(sizeof(long int) * (param->size_a));
	if (!(param->numbers_b))
		return (MALLOC_ERROR);
	return (0);
}
