/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:00:48 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/11 20:54:35 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_issign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

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