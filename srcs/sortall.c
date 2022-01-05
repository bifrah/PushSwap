/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:53:45 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/05 15:47:34 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_checksort(t_param *param, long int **tab_a)
{
	int	i;

	i = 0;
	if (param->size_b != 0)
		return (-1);
	while (i + 1 < param->size_a)
	{
		if (tab_a[0][i] > tab_a[0][i + 1])
			return (-1);
		i++;
	}
	return (0);
}

void	ft_radix(t_param *param, long int **tab_a, long int **tab_b)
{
	int	totalsize;
	int	max_num;
	int	max_bits;
	int	num;

	totalsize = param->size_a;
	max_num = whoismax(*tab_a, param->size_a) - 1;
	max_bits = 0;
	num = 0;
	param->i = -1;
	param->j = 0;
	while ((max_num >> max_bits) != 0)
		++max_bits;
	while (++param->i <= max_bits)
	{
		param->j = -1;
		while (++param->j < totalsize)
		{
			num = tab_a[0][0];
			if (((num >> param->i) & 1) == 1)
				rtab(param, tab_a, 1, 1);
			else
				pb(param, tab_a, tab_b);
		}
		while (param->size_b > 0)
			pa(param, tab_a, tab_b);
	}
}
