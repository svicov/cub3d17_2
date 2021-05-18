#ifndef CUB3D_H
#define CUB3D_H

#include "gnl/get_next_line.h"
#include "libft/libft.h"
#include "minilibx/mlx.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_conf
{
	int width;
	int heigth;
	char *no;
	char *so;
	char *we;
	char *ea;
	char *s;
	int f;
	int c;
	int r;
	int n;

} t_conf;

typedef struct s_mn
{
	t_conf conf;
	char **map;
	int	num_s;
	int num_s0;
	int	maxlen;
	char **tmap;
	int zp[8];
	int cols;
	int rows;
	int max_cols;
	int max_rows;
	int	player; /* встретился игрок и сколько раз < 3 */
} t_mn;

// Функций которые используется в гнл
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strchr(const char *s, int c);
char				*ft_strjoin(char const *s1, char const *s2);
void				*ft_memmove(void *dst, const void *src, size_t n);
int					get_next_line(int fd, char **line);
int					pars1(char **line, t_mn *mn);
void				init_st_conf(t_conf *ddd);
void				init_zp(t_mn *pzp);
int					digit_of_a_number(int n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					completion0(char **line, int i, t_mn *mn);
int					completion(char **line, int i, int j, t_mn *mn);
int					completion1(char **line, int i, t_mn *mn);
int					completion1(char **line, int i, t_mn *mn);
int					completion2(char **line, int i, t_mn *mn);
int					completion3(char **line, int i, t_mn *mn);
int					completion4(char **line, int i, t_mn *mn);
int					completion5(char **line, int i, t_mn *mn);
int					completion6(char **line, int i, t_mn *mn);
int					completion7(char **line, int i, t_mn *mn);
int pars2(int fd, t_mn *mn);
int true_map(t_mn *mn);
void ft_maxlen(t_mn *mn, char **line);
void rtue_mat2(t_mn *mn);
int ft_error(int i);
int			valid_map(t_mn *mn);
int			player_sees_1_a(t_mn *mn, int i, int j);



#endif