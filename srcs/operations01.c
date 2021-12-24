/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:18:40 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/24 14:52:53 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(long int **tab_a, t_param *param, int message)
{
	int			i;
	long int	tmp;

	i = 0;
	if (param->argc > 2)
	{
		tmp = tab_a[0][i];
		tab_a[0][i] = tab_a[0][i + 1];
		tab_a[0][i + 1] = tmp;
	}
	if (message != 0)
		ft_putstr_fd("sa\n", 1);
}

void	sb(long int **tab_b, t_param *param, int message)
{
	int			i;
	long int	tmp;

	i = 0;
	if (param->argc > 2)
	{
		tmp = tab_b[0][i];
		tab_b[0][i] = tab_b[0][i + 1];
		tab_b[0][i + 1] = tmp;
	}
	if (message != 0)
		ft_putstr_fd("sb\n", 1);
}

void	ss(long int **tab_a, long int **tab_b, t_param *param)
{
	sa(tab_a, param, 0);
	sb(tab_b, param, 0);
	ft_putstr_fd("ss\n", 1);
}

void	pa(long int **tab_a, long int **tab_b, t_param *param)
{
	int	i;
	int	tmp;

	if (param->size_b > 0)
	{
		i = 0;
		tmp = tab_b[0][0];
		while (i < param->argc - 1)
		{
			tab_b[0][i] = tab_b[0][i + 1];
			i++;
		}
		tab_b[0][i] = 0;
		i = param->argc - 1;
		while (i > 0)
		{
			tab_a[0][i] = tab_a[0][i - 1];
			i--;
		}
		tab_a[0][i] = tmp;
		param->size_b--;
		param->size_a++;
		ft_putstr_fd("pa\n", 1);
	}
}

void	pb(long int **tab_a, long int **tab_b, t_param *param)
{
	int	i;
	int	tmp;

	if (param->size_a > 0)
	{
		i = 0;
		tmp = tab_a[0][0];
		while (i < param->argc - 1)
		{
			tab_a[0][i] = tab_a[0][i + 1];
			i++;
		}
		tab_a[0][i] = 0;
		i = param->argc - 1;
		while (i > 0)
		{
			tab_b[0][i] = tab_b[0][i - 1];
			i--;
		}
		tab_b[0][i] = tmp;
		param->size_a--;
		param->size_b++;
		ft_putstr_fd("pb\n", 1);
	}
}
