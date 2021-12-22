/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 16:24:45 by bifrah            #+#    #+#             */
/*   Updated: 2021/12/22 23:23:28 by bifrah           ###   ########.fr       */
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
	long int	*numbers_a;
	long int	*numbers_b;
	int			size_a;
	int			size_b;
	int			argc;
	int			i;
	int			j;
}				t_param;

void		print_tab(int long *tab, int size);
int			ft_issign(int c);
int			create_tabs(t_param *param, int argc, char **argv);
int			ft_argisvalid(char *argv);
long int	*argv_to_tab(char **argv, int size);
long int	*check_format(long int *tab, int size);
int			ft_checkdouble(long int *tab, int size);
int			ft_maxandmin(long int *tab, int size);
void		ft_sortall(long int **tab, int argc);
void		sa(long int **tab_a, t_param *param, int message);
void		sb(long int **tab_b, t_param *param, int message);
void		ss(long int **tab_a, long int **tab_b, t_param *param);
void		pa(long int **tab_a, long int **tab_b, t_param *param);
void		pb(long int **tab_a, long int **tab_b, t_param *param);
void		rtab(long int **tab_a, t_param *param, int message);
void		rr(long int **tab_a, long int **tab_b, t_param *param);
void		rrtab(long int **tab_a, t_param *param, int message);
void		rrr(long int **tab_a, long int **tab_b, t_param *param);

//#define $BR exit (0);
#define ERROR			-2
#define EMPTY_ARG		-3
#define INPUT_ERROR		-4
#define MALLOC_ERROR	-5

#endif
