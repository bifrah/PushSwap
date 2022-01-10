/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:00:48 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/10 17:09:23 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_issign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	minforassign(long int *tab, int size, int lastmin)
{
	int	i;
	int	min;

	i = 0;
	min = 2147483647;
	while (i < size)
	{
		if (tab[i] < min && tab[i] > lastmin)
			min = tab[i];
		i++;
	}
	return (min);
}

int	whoismin(long int *tab, int size)
{
	int	i;
	int	min;

	i = 0;
	min = 2147483647;
	while (i < size)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}

int	whoisminindex(long int *tab, int size)
{
	int	i;
	int	min;

	i = 0;
	min = 2147483647;
	while (i < size)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	i = 0;
	while (tab[i] != min)
		i++;
	return (i - 1);
}

int	whoismax(long int *tab, int size)
{
	int	i;
	int	max;

	i = 0;
	max = -2147483648;
	while (i < size)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
