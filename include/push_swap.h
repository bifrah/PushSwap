/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrah <bifrah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:17:12 by bifrah            #+#    #+#             */
/*   Updated: 2022/01/15 18:39:10 by bifrah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_param {
	long int	*a;
	long int	*copy_a;
	long int	*b;
	int			size_a;
	int			size_b;
	int			argc;
	int			i;
	int			j;
	int			max_num;
	int			max_bits;
}				t_param;

typedef struct s_chunk {
	int		chunklen;
	int		chunklenrest;
	int		actualchunk;
}				t_chunk;

int			ft_thank_you(t_param *param);
int			ft_issign(int c);
int			minforassign(long int *tab, int size, int min);
int			whoismin(long int *tab, int size);
int			whoisminindex(long int *tab, int size);
int			whoismax(long int *tab, int size);
int			create_tabs(t_param *param, char **argv);
int			ft_optimize(t_param *param);
int			ft_argisvalid(char *argv);
long int	*argv_to_tab(char **argv, int size);
long int	*check_format(long int *tab, int size);
int			ft_checkdouble(long int *tab, int size);
int			ft_maxandmin(long int *tab, int size);
int			ft_checkvoid(long int *tab, int size);
void		ft_radix(t_param *param, long int **tab_a, long int **tab_b);
void		ft_3arg(t_param *param);
void		ft_5arg(t_param *param);
void		sa(t_param *param, long int **tab_a, int message);
void		sb(t_param *param, long int **tab_b, int message);
void		ss(t_param *param, long int **tab_a, long int **tab_b);
void		pa(t_param *param, long int **tab_a, long int **tab_b);
void		pb(t_param *param, long int **tab_a, long int **tab_b);
void		rtab(t_param *param, long int **tab_a, int sizetab, int message);
void		rr(t_param *param, long int **tab_a, long int **tab_b);
void		rrtab(t_param *param, long int **tab_a, int sizetab, int message);
void		rrr(t_param *param, long int **tab_a, long int **tab_b);
void		free_split(char **array);

# define ERROR			-2
# define EMPTY_ARG		-3
# define INPUT_ERROR	-4
# define MALLOC_ERROR	-5
# define SORTED			-6

#endif
