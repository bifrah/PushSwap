/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:53:45 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/05 02:31:43 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//   struct Stack helper_stack;
//   while (!IsEmpty(orig_stack))
//   {
//     int element = Pop(orig_stack);
//     while (!IsEmpty(&helper_stack) && Top(&helper_stack) < element)
//     {
//       Push(orig_stack, Pop(&helper_stack));
//     }
//     Push(&helper_stack, element);
//   }
//   while (!IsEmpty(&helper_stack))
//   {
//     Push(orig_stack, Pop(&helper_stack));
//   }

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

void	ft_sortall(t_param *param, long int **tab_a, long int **tab_b)
{
	int	totalsize;
	int	max_num;
	int	max_bits;
	int	num;
	int	i;
	int	j;

	totalsize = param->size_a;
	max_num = totalsize - 1;
	max_bits = 0;
	num = 0;
	i = 0;
	j = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		while (j < totalsize)
		{
			num = tab_a[0][0];
			if (((num >> i) & 1) == 1)
				rtab(param, tab_a, 1, 1);
			else
				pb(param, tab_a, tab_b);
			j++;
		}
		j = 0;
		while (param->size_b != 0)
			pa(param, tab_a, tab_b);
		i++;
	}
}

/*
	while (tab_a[i] > tab_a[i + 1] && tab_b[i] > tab_b[i + 1])
	{
		while (param->size_a / 2 > 0)
			pb(param, tab_a, tab_b);
		ss(param, tab_a, tab_b);
		while (tab_a[i] > tab_a[i + 1])
			sa(param, tab_a, 1);
		while (tab_b[i] > tab_b[i + 1])
			sb(param, tab_b, 1);
	}
*/ 