/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:53:45 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/03 21:17:58 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_select(t_param *param, long int **tab_a, long int **tab_b)
{
	int	i;

	i = 0;
	while (tab_a[0][i] != whoismin(param, *tab_a, param->size_a))
	{
		rtab(param, tab_a, param->size_a, 1);
		if (tab_a[0][i] == whoismin(param, *tab_a, param->size_a))
			pb(param, tab_a, tab_b);
		i++;
	}
}

void	ft_sortall(t_param *param, long int **tab_a, long int **tab_b)
{
	int	i;

	i = 0;
	while (tab_a[i] > tab_a[i + 1] && tab_b[i] > tab_b[i + 1])
	{
		while (param->size_a / 2 > 0)
			pb(param, tab_a, tab_b);
		ss(param, tab_a, tab_b);
		while (tab_a[i] > tab_a[i + 1])
			sa(param, tab_a, 1);
		while (tab_b[i] > tab_b[i + 1])
			sb(param, tab_b, 1);
		ft_select(param, tab_a, tab_b);
	}
}
