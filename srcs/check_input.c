/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:39:53 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/11 17:56:01 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int		ft_check_input(int argc, char **argv)
{
	if (argc < 2)
		return (INPUT_ERROR);
	if (ft_inputisnum(argv) == -1)
	{
		ft_putstr_fd("error", 1);
		return (INPUT_ERROR);
	}
	return (0);
}