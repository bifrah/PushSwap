/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:24:45 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/11 17:41:32 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

struct s_param{
	int	i;
	int	j;
}	t_param;

int	ft_inputisnum(char **dest);
int	ptrstrlen(char **dest);
void	ft_freetab(char ***dest);
void	ft_free(char **tmp, char ***dest);
int		ft_check_input(int argc, char **argv);


#define MALLOC_ERROR	-2
#define ERROR			-3
#define INPUT_ERROR		-4
#define BLABLA_ERROR	-5

#endif
