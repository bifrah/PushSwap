/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:36:01 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/24 15:32:42 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_param	param;

	create_tabs(&param, argc, argv);
	printf("size_A : %d\n", param.size_a);
	print_tab(param.numbers_a, param.size_a);
	printf("\nsize_B : %d\n", param.size_b);
	print_tab(param.numbers_b, param.size_b);
	write(1, "\n", 1);
	ft_sortall(&param, &param.numbers_a, &param.numbers_b);
	printf("\nsize_A : %d\n", param.size_a);
	print_tab(param.numbers_a, param.size_a);
	printf("\nsize_B : %d\n", param.size_b);
	print_tab(param.numbers_b, param.size_b);
	free(param.numbers_a);
	free(param.numbers_b);
}
