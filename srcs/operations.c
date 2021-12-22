/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:18:40 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/22 14:15:56 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(long int **tab_a, int argc, int message)
{
	int			i;
	long int	tmp;

	i = 0;
	if (argc > 2)
	{
		tmp = tab_a[0][i];
		tab_a[0][i] = tab_a[0][i + 1];
		tab_a[0][i + 1] = tmp;
	}
	if (message != 0)
		ft_putstr_fd("sa\n", 1);
}

void	sb(long int **tab_b, int argc, int message)
{
	int			i;
	long int	tmp;

	i = 0;
	if (argc > 2)
	{
		tmp = tab_b[0][i];
		tab_b[0][i] = tab_b[0][i + 1];
		tab_b[0][i + 1] = tmp;
	}
	if (message != 0)
		ft_putstr_fd("sb\n", 1);
}

void	ss(long int **tab_a, long int **tab_b, int argc)
{
	sa(tab_a, argc, 0);
	sb(tab_b, argc, 0);
	ft_putstr_fd("ss\n", 1);
}

void	pa(long int **tab_a, long int **tab_b, int argc)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = tab_b[0][0];
	while (i < argc - 1)
	{
		tab_b[0][i] = tab_b[0][i + 1];
		i++;
	}
	tab_b[0][i] = 0;
	i = argc - 1;
	while (i > 0)
	{
		tab_a[0][i] = tab_a[0][i - 1];
		i--;
	}
	tab_a[0][i] = tmp;
	ft_putstr_fd("pa\n", 1);
}

void	pb(long int **tab_a, long int **tab_b, int argc)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = tab_a[0][0];
	while (i < argc - 1)
	{
		tab_a[0][i] = tab_a[0][i + 1];
		i++;
	}
	tab_a[0][i] = 0;
	i = argc - 1;
	while (i > 0)
	{
		tab_b[0][i] = tab_b[0][i - 1];
		i--;
	}
	tab_b[0][i] = tmp;
	ft_putstr_fd("pb\n", 1);
}

void	ra(long int **tab_a, int argc, int message)
{
	int			i;
	long int	tmp;

	i = 0;
	tmp = tab_a[0][i];
	while (i + 1 <= argc - 1)
	{
		tab_a[0][i] = tab_a[0][i + 1];
		i++;
	}
	tab_a[0][i] = tmp;
	if (message != 0)
		ft_putstr_fd("ra\n", 1);
}

void	rb(long int **tab_b, int argc, int message)
{
	int			i;
	long int	tmp;

	i = 0;
	tmp = tab_b[0][i];
	while (i + 1 <= argc - 1)
	{
		tab_b[0][i] = tab_b[0][i + 1];
		i++;
	}
	tab_b[0][i] = tmp;
	if (message != 0)
		ft_putstr_fd("rb\n", 1);
}

void	rr(long int **tab_a, long int **tab_b, int argc)
{
	ra(tab_a, argc, 0);
	rb(tab_b, argc, 0);
	ft_putstr_fd("rr\n", 1);
}

void	rra(long int **tab_a, long int **tab_b, int argc, int message)
{
	int			i;
	long int	tmp;

	i = argc - 1;
	tmp = tab_b[0][i];
	while (i - 1 >= 0)
	{
		tab_a[0][i] = tab_a[0][i - 1];
		i--;
	}
	tab_a[0][i] = tmp;
	if (message != 0)
		ft_putstr_fd("rra\n", 1);
}

void	rrb(long int **tab_a, long int **tab_b, int argc, int message)
{
	int			i;
	long int	tmp;

	i = argc - 1;
	tmp = tab_b[0][i];
	while (i - 1 >= 0)
	{
		tab_a[0][i] = tab_a[0][i - 1];
		i--;
	}
	tab_a[0][i] = tmp;
	if (message != 0)
		ft_putstr_fd("rrb\n", 1);
}

void	rrr(long int **tab_a, long int **tab_b, int argc)
{
	rra(tab_a, tab_b, argc, 0);
	rrb(tab_a, tab_b, argc, 0);
	ft_putstr_fd("rrr\n", 1);
}