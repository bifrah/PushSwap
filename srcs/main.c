/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:36:01 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/05 15:21:54 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_init(t_param *param, int argc)
{
	param->argc = argc;
	param->size_a = argc - 1;
	param->size_b = 0;
	param->i = 0;
	param->j = 0;
	param->numbers_b = NULL;
	param->numbers_a = NULL;
}

void	ft_free_tab(t_param param)
{
	if (param.numbers_a)
		free(param.numbers_a);
	if (param.numbers_b) //PROBLEME AVEC CE FREE AVEC CETTE SEQUENCE : ./push_swap 9 8 7 6 5 4 3 2 1 
		free(param.numbers_b);
}

int	main(int argc, char **argv)
{
	t_param	param;

	ft_init(&param, argc);
	if (create_tabs(&param, argc, argv) < 0)
	{
		ft_free_tab(param);
		return (-1);
	}
	// printf("size_A : %d\n", param.size_a);
	// print_tab(param.numbers_a, param.size_a);
	// printf("\nsize_B : %d\n", param.size_b);
	// print_tab(param.numbers_b, param.size_b);
	// write(1, "\n", 1);
	ft_sortall(&param, &param.numbers_a, &param.numbers_b);
	printf("\nsize_A : %d\n", param.size_a);
	print_tab(param.numbers_a, param.size_a);
	printf("\nsize_B : %d\n", param.size_b);
	print_tab(param.numbers_b, param.size_b);
	ft_free_tab(param);
}
