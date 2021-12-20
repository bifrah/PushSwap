/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 21:18:40 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/20 21:18:41 by bifrah           ###   ########.fr       */
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
	sa(&tab_a, argc, 0);
	sb(&tab_b, argc, 0);
	ft_putstr_fd("ss\n", 1);
}

void	pa(long int **tab_a, long int **tab_b, int argc)
{
	
}

void	pb(long int **tab_a, long int **tab_b, int argc)
{
	
}

void	ra(long int **tab_a, int argc, int message)
{
	
}

void	rb(long int **tab_b, int argc, int message)
{
	
}

void	rr(long int **tab_a, long int **tab_b, int argc)
{
	ra();
	rb();
}

void	rra(long int **tab_a, long int **tab_b, int argc, int message)
{
	
}

void	rrb(long int **tab_a, long int **tab_b, int argc, int message)
{
	
}

void	rrr(long int **tab_a, long int **tab_b, int argc)
{
	rra();
	rrb();
}