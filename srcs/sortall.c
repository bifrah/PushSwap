/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:53:45 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/08 00:34:03 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_3arg(t_param *param)
{
	if (param->a[0] > param->a[1] && param->a[1] > param->a[2])
		sa(param, &param->a, 1);
	if (param->a[1] > param->a[2] && param->a[1] > param->a[0]
		&& param->a[0] > param->a[2])
		rrtab(param, &param->a, 1, 1);
	if (param->a[0] > param->a[1] && param->a[2] > param->a[0])
		sa(param, &param->a, 1);
	if (param->a[0] < param->a[1] && param->a[2] < param->a[1]
		&& param->a[0] < param->a[2])
		sa(param, &param->a, 1);
	if (param->a[0] > param->a[2])
		rtab(param, &param->a, 1, 1);
}

void	ft_5arg(t_param *param)
{
	// print_tab(param->a, param->size_a);
	while (param->size_b < 2)
	{
		if (param->a[param->size_a - 1] == 0 || param->a[param->size_a - 1] == 1)
			pb(param, &param->a, &param->b);
		else
			rtab(param, &param->a, 1, 1);
	}
	ft_3arg(param);
	print_tab(param->a, param->size_a);
	write(1, "\n", 1);
	if (param->b[1] < param->b[0])
		sb(param, &param->b, 2);
	while (param->size_b > 0)
		pa(param, &param->a, &param->b);
	print_tab(param->a, param->size_a);
}

void	ft_radix(t_param *param, long int **tab_a, long int **tab_b)
{
	int	totalsize;
	int	num;

	totalsize = param->size_a;
	param->max_num = whoismax(*tab_a, param->size_a) - 1;
	param->max_bits = 0;
	num = 0;
	param->i = -1;
	param->j = 0;
	while ((param->max_num >> param->max_bits) != 0)
		++param->max_bits;
	while (++param->i <= param->max_bits)
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
