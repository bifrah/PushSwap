/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 16:53:45 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/17 17:30:59 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long int	*ft_selection(t_param param, int argc)
{
	int i;
	int j;
	int tmp;

	i = -1;
	while (++i < argc - 1)
	{
		j = i + 1;
		while (++j < argc - 1)
		{
			if (param.numbers[i] > param.numbers[j])
			{
				tmp = param.numbers[i];
				param.numbers[i] = param.numbers[j];
				param.numbers[j] = tmp;
			}
		}
	}
	return (param.numbers);
}

void	ft_sortall(t_param param, int argc)
{
	if (argc < 50)
		ft_selection(param, argc);
	/*

	if (argc < x && argc > z)
		exec tel tri 1
	if (argc < x && argc > z)
		exec tel tri 2
	if (argc < x && argc > z)
		exec tel tri 3

	*/
}
