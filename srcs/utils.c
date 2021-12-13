/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:00:48 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/13 18:00:17 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_issign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	ptrstrlen(char **dest)
{
	int	j;

	j = 0;
	while (dest[j])
		j++;
	if (j == 1 && dest[0][0] == '\0')
		return (0);
	return (j);
}

void	ft_freetab(char ***dest)
{
	int	y;

	y = -1;
	while (dest[0][++y])
		free(dest[0][y]);
	free(*dest);
	*dest = NULL;
}

void	ft_free(char **tmp, char ***dest)
{
	if (*tmp)
	{
		free(*tmp);
		*tmp = NULL;
	}
	if (dest && *dest)
		ft_freetab(dest);
}

int	stockdquote(char **dest)
{
	t_param	param;

	param.i = 0;
	param.j = 0;
	param.tmp = ft_split(dest[1], " ");
	while (param.tmp[param.j])
	{
		dest[param.j] = ft_atoi(param.tmp[param.j]);
		param.j++;
	}
	return (0);
}