/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:00:48 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/21 17:52:23 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_issign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	create_tabs(t_param param, int argc, char **argv)
{
	if (!(argc >= 3))
		return (EMPTY_ARG);
	param.numbers_a = argv_to_tab(argv + 1, argc - 1);
	if (!param.numbers_a)
	{
		ft_putstr_fd("error\n", 1);
		return (INPUT_ERROR);
	}
	param.numbers_b = (long int *)malloc(sizeof(long int) * (argc - 1));
	if (!param.numbers_b)
		return (MALLOC_ERROR);
	return (0);
}
