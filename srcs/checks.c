/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:58:09 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/16 18:33:08 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_checkdouble(int *tab, int size)
{
	int	i;
	int	j;

	i = size - 1;
	j = i - 1;
	print_tab(tab, size);
	printf("size : %d\n", size);
	while (i >= 0)
	{
		while (i >= 0 && j >= 0)
		{
			printf("tab i : %d\n", tab[i]);
			printf("tab j : %d\n\n", tab[j]);
			if (tab[j] == tab[i])
			{
				return (-1);
			}
			j--;
		}
		i--;
		j = i - 1;
	}
	return (0);
}
