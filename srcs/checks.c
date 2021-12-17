/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:58:09 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/17 16:26:30 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_checkdouble(long int *tab, int size)
{
	int	i;
	int	j;

	i = size - 1;
	j = i - 1;
	while (i >= 0)
	{
		while (i >= 0 && j >= 0)
		{
			if (tab[j] == tab[i])
				return (-1);
			j--;
		}
		i--;
		j = i - 1;
	}
	return (0);
}

int	ft_maxandmin(long int *tab, int size)
{
	long int	min;
	long int	max;
	int			i;

	min = -2147483648;
	max = 2147483647;
	i = size - 1;
	while (i >= 0)
	{
		printf("tab[i] = %ld\n", tab[i]);
		if (tab[i] < min || tab[i] > max)
			return (-1);
		i--;
	}
	return (0);
}
