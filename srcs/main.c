/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:36:01 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/22 22:33:27 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_param	param;

	create_tabs(&param, argc, argv);
	write(1, "\nA\n", 3);
	print_tab(param.numbers_a, param.argc - 1);
	write(1, "\nB\n", 3);
	print_tab(param.numbers_b, param.argc - 1);
	write(1, "\n", 1);
	rtab(&param.numbers_b, &param, 1);
	write(1, "\nA\n", 3);
	print_tab(param.numbers_a, param.argc - 1);
	write(1, "\nB\n", 3);
	print_tab(param.numbers_b, param.argc - 1);
	free(param.numbers_a);
	free(param.numbers_b);
}
