/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:36:01 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/07 17:35:36 by bifrah           ###   ########.fr       */
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

void	ft_free_tab(t_param *param)
{
	if (param->numbers_a)
		free(param->numbers_a);
	if (param->copy_a)
		free(param->copy_a);
	if (param->numbers_b)
		free(param->numbers_b);
}

int	ft_optimize(t_param *param)
{
	int			numtoassign;
	int			tmp;
	int			count;
	long int	*tmptab;

	tmptab = (long int *)malloc(sizeof(long int) * param->size_a);
	if (!tmptab)
		return (MALLOC_ERROR);
	numtoassign = 0;
	tmp = whoismin(param->copy_a, param->size_a);
	count = -1;
	while (++count < param->size_a)
	{
		param->i = -1;
		while (++param->i < param->size_a)
		{
			if (param->numbers_a[param->i] != tmp)
				continue ;
			tmptab[param->i] = numtoassign++;
		}
		tmp = minforassign(param->copy_a, param->size_a, tmp);
	}
	free(param->numbers_a);
	param->numbers_a = tmptab;
	return (0);
}

int	main(int argc, char **argv)
{
	t_param	param;

	ft_init(&param, argc);
	if (create_tabs(&param, argc, argv) < 0)
		return (-1);
	if (ft_optimize(&param) == MALLOC_ERROR)
	{
		ft_free_tab(&param);
		ft_putstr_fd("Error\n", 2);
		return (-1);
	}
	ft_radix(&param, &param.numbers_a, &param.numbers_b);
	ft_free_tab(&param);
}
