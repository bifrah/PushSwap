/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:36:01 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/11 14:05:47 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_tab(int long *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%ld\n", tab[i]);
		i++;
	}
}

void	ft_init(t_param *param, int argc)
{
	param->argc = argc;
	param->size_a = argc - 1;
	param->size_b = 0;
	param->i = 0;
	param->j = 0;
	param->b = NULL;
	param->a = NULL;
}

void	ft_free_tab(t_param *param)
{
	if (param->a)
		free(param->a);
	if (param->copy_a)
		free(param->copy_a);
	if (param->b)
		free(param->b);
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
			if (param->a[param->i] != tmp)
				continue ;
			tmptab[param->i] = numtoassign++;
		}
		tmp = minforassign(param->copy_a, param->size_a, tmp);
	}
	free(param->a);
	param->a = tmptab;
	return (0);
}

int	main(int argc, char **argv)
{
	t_param	param;

	if (argc < 2)
		return (-1);
	ft_init(&param, argc);
	if (create_tabs(&param, argc, argv) < 0)
		return (-1);
	if (ft_thank_you(&param) == SORTED)
	{
		ft_free_tab(&param);
		return (0);
	}
	if (ft_optimize(&param) == MALLOC_ERROR)
	{
		ft_free_tab(&param);
		ft_putstr_fd("Error\n", 2);
		return (-1);
	}
	if (argc <= 4)
		ft_3arg(&param);
	else if (argc == 6 || argc == 5)
		ft_5arg(&param);
	else
		ft_radix(&param, &param.a, &param.b);
	ft_free_tab(&param);
}

/*
to do :
- faire un sort pour 100 arg
*/