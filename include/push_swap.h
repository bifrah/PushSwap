/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:24:45 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/21 02:47:32 by bifrah           ###   ########.fr       */
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
	char		**tmp;
	char		**dest;
	long int	*numbers;
	int			i;
	int			j;
}				t_param;

void		print_tab(int long *tab, int size);
int			ft_issign(int c);
int			ptrstrlen(char **dest);
void		ft_freetab(long int **tab);
void		ft_free(char **tmp, char ***dest);
int			ft_stockandcheck(int argc, char **argv, t_param param);
int			ft_argisvalid(char *argv);
long int	*argv_to_tab(char **argv, int size);
long int	*check_format(long int *tab, int size);
int			ft_checkdouble(long int *tab, int size);
int			ft_maxandmin(long int *tab, int size);
void		ft_sortall(long int **tab, int argc);
void		sa(long int **tab_a, int argc, int message);
void		sb(long int **tab_b, int argc, int message);
void		ss(long int **tab_a, long int **tab_b, int argc);
void		pa(long int **tab_a, long int **tab_b, int argc);
void		pb(long int **tab_a, long int **tab_b, int argc);
void		ra(long int **tab_a, int argc, int message);
void		rb(long int **tab_b, int argc, int message);
void		rr(long int **tab_a, long int **tab_b, int argc);
void		rra(long int **tab_a, long int **tab_b, int argc, int message);
void		rrb(long int **tab_a, long int **tab_b, int argc, int message);
void		rrr(long int **tab_a, long int **tab_b, int argc);

//#define $BR exit (0);
#define ERROR			-2
#define EMPTY_ARG		-3
#define INPUT_ERROR		-4
#define MALLOC_ERROR	-5

#endif
