/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:53:45 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/17 18:10:17 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_selection(long int **tab, int argc)
{
	int			i;
	int 		j;
	long int	tmp;

	i = -1;
	while (++i < argc - 1)
	{
		j = i + 1;
		while (++j < argc - 1)
		{
			if (*tab[i] > *tab[j])
			{
				tmp = *tab[i];
				*tab[i] = *tab[j];
				*tab[j] = tmp;
			}
		}
	}
}

void	ft_sortall(long int **tab, int argc)
{
	if (argc < 50)
		ft_selection(tab, argc);
	/*

	if (argc < x && argc > z)
		exec tel tri 1
	if (argc < x && argc > z)
		exec tel tri 2
	if (argc < x && argc > z)
		exec tel tri 3

	*/
}
