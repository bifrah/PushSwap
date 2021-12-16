/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 17:00:48 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/16 15:57:38 by bifrah           ###   ########.fr       */
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

void	ft_freetab(int **tab)
{
	int	y;

	y = -1;
	while (tab[++y])
		free(tab[y]);
	free(*tab);
	*tab = NULL;
}

// void	ft_free(char **tmp, char ***dest)
// {
// 	if (*tmp)
// 	{
// 		free(*tmp);
// 		*tmp = NULL;
// 	}
// 	if (dest && *dest)
// 		ft_freetab(dest);
// }
