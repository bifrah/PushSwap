/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:53:45 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/04 17:48:03 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sortall(t_param *param, long int **tab_a, long int **tab_b)
{
	while (tab_a[0][0] != whoismin(param, *tab_a, 1))
	{
		rtab(param, tab_a, 1, 1);
		if (tab_a[0][0] == whoismin(param, *tab_a, 1))
			pb(param, tab_a, tab_b);
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