/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:53:45 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/22 21:57:47 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_select(long int **tab, int argc)
{
	int			i;
	int			j;
	long int	tmp;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (tab[0][i] > tab[0][j])
			{
				tmp = tab[0][i];
				tab[0][i] = tab[0][j];
				tab[0][j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	ft_bubble(long int **tab, int argc)
{
	int	i;
	int	j;
	int	tmp;

	j = 1;
	while (j <= argc)
	{
		i = 0;
		while (i < argc - 1)
		{
			if (tab[0][i] > tab[0][i + 1])
			{
					tmp = tab[0][i];
					tab[0][i] = tab[0][i+1];
					tab[0][i+1] = tmp;
			}
			i++;
		}
		j++;
	}
	int z = 0;
	while(z < argc)
	{
		printf("tab[%d] : %ld\n", z, tab[0][z]);
		z++;
	}
}

void	ft_permut(long int **tab, int argc)
{
	int	i;
	int	j;
	int	k;
	int	tmp;

	i = 0;
	while (i < argc)
	{
		if (tab[0][i] < tab[0][i - 1])
		{
			j = 0;
			while (tab[0][j] < tab[0][i])
				j++;
			k = i - 1;
			tmp = tab[0][i];
			while (k >= j)
			{
				tab[0][k + 1] = tab[0][k];
				k--;
			}
			tab[0][j] = tmp;
		}
		i++;
	}
}

void	ft_sortall(long int **tab, int argc)
{
	if (argc > 100 && argc < 500)
		ft_permut(tab, argc);
	if (argc > 50 && argc < 100)
		ft_bubble(tab, argc);
	if (argc < 50)
		ft_select(tab, argc);
}
