/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 16:58:09 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/16 17:50:54 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_checkdouble(int *tab, int size)
{
	int	i;
	int	j;

	i = size;
	j = size - 1;
	print_tab(tab, size);
	while (i >= 0)
	{
		while (i >= 0 && j >= 0)
		{
			if (tab[i] == tab[j])
				return (-1);
			j--;
		}
		i--;
	}
	return (0);
}
