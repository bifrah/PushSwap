/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:36:01 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/22 20:02:19 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_param	param;

	if (!(argc >= 3))
		return (EMPTY_ARG);
	param.argc = argc;
	param.size_a = argc - 1;
	param.size_b = argc - 1;
	param.numbers_a = argv_to_tab(argv + 1, param.size_a);
	if (!param.numbers_a)
	{
		ft_putstr_fd("error\n", 1);
		return (INPUT_ERROR);
	}
	param.numbers_b = (long int *)malloc(sizeof(long int) * (param.size_b));
	if (!param.numbers_b)
		return (MALLOC_ERROR);
	param.numbers_b[0] = 42;
	param.numbers_b[1] = 222;
	write(1, "\nA\n", 3);
	print_tab(param.numbers_a, param.argc - 1);
	write(1, "\nB\n", 3);
	print_tab(param.numbers_b, param.argc - 1);
	write(1, "\n", 1);
	// ft_sortall(&param.numbers_a, param.argc);
	rb(&param.numbers_b, param, 1);
	write(1, "\nA\n", 3);
	print_tab(param.numbers_a, param.argc - 1);
	write(1, "\nB\n", 3);
	print_tab(param.numbers_b, param.argc - 1);
	free(param.numbers_a);
	free(param.numbers_b);
}
