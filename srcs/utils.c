/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:00:48 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/22 21:59:48 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_issign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	create_tabs(t_param *param, int argc, char **argv)
{
	if (!(argc >= 3))
		return (EMPTY_ARG);
	param->argc = argc;
	param->size_a = argc - 1;
	param->size_b = 2;
	param->numbers_a = argv_to_tab(argv + 1, param->size_a);
	if (!param->numbers_a)
	{
		ft_putstr_fd("error\n", 1);
		return (INPUT_ERROR);
	}
	param->numbers_b = (long int *)malloc(sizeof(long int) * (param->size_b));
	if (!param->numbers_b)
		return (MALLOC_ERROR);
	param->numbers_b[0] = 42;
	param->numbers_b[1] = 222;
	return (0);
}
