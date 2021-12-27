/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations02.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:18:40 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/27 22:03:36 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rtab(t_param *param, long int **tab, int sizetab, int message)
{
	int			i;
	long int	tmp;
	int			*size;

	size = 0;
	if (sizetab == 1)
		size = &(param->size_a);
	if (sizetab == 2)
		size = &(param->size_b);
	if (*size > 0)
	{
		i = 0;
		tmp = tab[0][i];
		while (i + 1 < *size)
		{
			tab[0][i] = tab[0][i + 1];
			i++;
		}
		tab[0][i] = tmp;
		if (message == 1)
			ft_putstr_fd("ra\n", 1);
		if (message == 2)
			ft_putstr_fd("rb\n", 1);
	}
}

void	rr(t_param *param, long int **tab_a, long int **tab_b)
{
	rtab(param, tab_a, 1, 0);
	rtab(param, tab_b, 2, 0);
	ft_putstr_fd("rr\n", 1);
}

void	rrtab(t_param *param, long int **tab, int sizetab, int message)
{
	int			i;
	long int	tmp;
	int			*size;

	size = 0;
	if (sizetab == 1)
		size = &(param->size_a);
	if (sizetab == 2)
		size = &(param->size_b);
	if (*size > 0)
	{
		i = *size - 1;
		tmp = tab[0][i];
		while (i - 1 >= 0)
		{
			tab[0][i] = tab[0][i - 1];
			i--;
		}
		tab[0][i] = tmp;
		if (message == 1)
			ft_putstr_fd("rra\n", 1);
		if (message == 2)
			ft_putstr_fd("rrb\n", 1);
	}
}

void	rrr(t_param *param, long int **tab_a, long int **tab_b)
{
	rrtab(param, tab_a, 1, 0);
	rrtab(param, tab_b, 2, 0);
	ft_putstr_fd("rrr\n", 1);
}
