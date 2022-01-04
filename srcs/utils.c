/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:00:48 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/04 22:26:12 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_issign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	whoismin(t_param *param, long int *tab, int size)
{
	int	i;
	int	min;

	if (size == 1)
		size = param->size_a;
	if (size == 2)
		size = param->size_b;
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

int	whoismax(t_param *param, long int *tab, int size)
{
	int	i;
	int	max;

	if (size == 1)
		size = param->size_a;
	if (size == 2)
		size = param->size_b;
	i = 0;
	max = -2147483648;
	while (i < size)
	{
		if (tab[i] > max)
			max = tab[i];
		printf("max : %d\n", max);
		i++;
	}
	return (max);
}

int	create_tabs(t_param *param, int argc, char **argv)
{
	if (argc < 3)
		return (EMPTY_ARG);
	param->numbers_a = argv_to_tab(argv + 1, param->size_a);
	if (!param->numbers_a)
	{
		ft_putstr_fd("error\n", 1);
		return (INPUT_ERROR);
	}
	param->numbers_b = (long int *)malloc(sizeof(long int) * (param->size_a));
	if (!(param->numbers_b))
		return (MALLOC_ERROR);
	return (0);
}
