/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 16:51:02 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/09/13 16:51:03 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <math.h>
# include "../libft/libft.h"
# define WIDTH 1600
# define HEIGHT 1300

typedef struct		s_fig
{
	int				fd;
	char			*name;
	void			*mlx;
	void			*win;
	int				**map;
	int				h;
	int				check;
	int				w;
	int				z;
	int				dx;
	int				dy;
	int				sx;
	int				sy;
	unsigned long	color;
}					t_fig;

int					parse(t_fig *figure);
void				mlx(t_fig *figure);
void				draw(t_fig *figure);
void				zoom(int key, t_fig *figure);
void				fdf(t_fig *figure);
int					parse(t_fig *figure);
int					reader(t_fig *figure);
int					zone(t_fig *figure, char *str);
void				draw_l(t_fig *figure, int *xy, int x, int y);
void				check_cor(t_fig *figure);
void				draw_lines(t_fig *figure, int x, int y);
int					esc(void);
void				decal(int key, t_fig *figure);
int					keyboard(int key, t_fig *figure);
void				mlx(t_fig *figure);
int					frame(t_fig *figure);

#endif
