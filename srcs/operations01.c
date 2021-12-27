/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations01.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:18:40 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/27 22:01:35 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_param *param, long int **tab_a, int message)
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

void	sb(t_param *param, long int **tab_b, int message)
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

void	ss(t_param *param, long int **tab_a, long int **tab_b)
{
	sa(param, tab_a, 0);
	sb(param, tab_b, 0);
	ft_putstr_fd("ss\n", 1);
}

void	pa(t_param *param, long int **tab_a, long int **tab_b)
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

void	pb(t_param *param, long int **tab_a, long int **tab_b)
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
