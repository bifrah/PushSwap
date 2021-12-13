/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:39:53 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/13 18:00:06 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_checkdquote(char **dest)
{
	t_param	param;

	param.i = 0;
	param.j = 0;
	while (dest[1][param.i])
	{
		if (ft_isdigit(dest[1][param.i]) == 0
			|| (ft_issign(dest[1][param.i]) == 1
			&& ft_isdigit(dest[1][param.i + 1]) == 0))
			return (-1);
		param.i++;
	}
	return (0);
}

int	ft_inputisnum(char **dest)
{
	t_param	index;

	index.j = 0;
	index.i = 0;
	if (dest == NULL)
		return (0);
	while (dest[++index.j])
	{	
		if ((dest[index.j][0] == '-' || dest[index.j][0] == '+')
			&& index.i == 0)
		{
			index.i = 1;
			if (ft_isdigit(dest[index.j][index.i]) == 0)
				return (-1);
		}
		while (dest[index.j][index.i])
		{
			if (ft_isdigit(dest[index.j][index.i]) == 0)
				return (-1);
			index.i++;
		}
		index.i = 0;
	}
	return (0);
}

int	ft_check_input(int argc, char **argv)
{
	if (argc < 2)
		return (EMPTY_ARG);
	if (argc == 2)
	{
		if (ft_checkdquote(argv) = -1)
			return (INPUT_ERROR);
	}
	if (ft_inputisnum(argv) == -1)
	{
		ft_putstr_fd("error\n", 1);
		return (INPUT_ERROR);
	}
	return (0);
}