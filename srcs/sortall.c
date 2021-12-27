/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:53:45 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/27 22:18:33 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sortall(t_param *param, long int **tab_a, long int **tab_b)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = param->size_b / 2;
	if (tab_a[i] > tab_a[i + 1])
		sa(&param, tab_a, 1);
	if (tab_b[i] > tab_b[i + 1])
		sa(&param, tab_b, 1);
	if (tab_a[i] > tab_a[i + 1] && tab_b[i] > tab_b[i + 1])
		ss(&param, tab_a, tab_b);
	while (param->size_b > 0)
	{
		pb(&param, tab_a, tab_b);
		param->size_b--;
	}
}
