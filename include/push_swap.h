/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:24:45 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/13 23:52:26 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_param {
	char	**tmp;
	char	**dest;
	int		*numbers;
	int		i;
	int		j;
}				t_param;

int		ft_issign(int c);
int		ptrstrlen(char **dest);
void	ft_freetab(char ***dest);
void	ft_free(char **tmp, char ***dest);
int		ft_stockandcheck(int argc, char **argv);
int		ft_argisvalid(char *argv);
void	print_tab(int *tab, int size);
int		*argv_to_tab(char **argv, int size);
int		*check_format(int *ret/*, int size*/);


//#define $BR exit (0);
#define ERROR			-2
#define EMPTY_ARG		-3
#define INPUT_ERROR		-4
#define MALLOC_ERROR	-5

#endif
