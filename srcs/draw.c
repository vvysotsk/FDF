/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:22:05 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/09/18 19:22:06 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			frame(t_fig *figure)
{
	int		x;

	x = 0;
	while (x <= WIDTH)
		mlx_pixel_put(figure->mlx, figure->win, x++, 1150, 0x00FFFFFF);
	mlx_string_put(figure->mlx, figure->win, 20, 15, 0x00FFFFFF, \
		"press |ESC| for exit!");
	mlx_string_put(figure->mlx, figure->win, 480, 1200, 0x00FFFFFF, \
		"|*|&|/| - depth, |+|&|-| - zoom, |arrows| - position, \
		|C| - color, |R| - reset");
	return (0);
}

void		draw_l(t_fig *figure, int *xy, int x, int y)
{
	int		xx[2];
	int		yy[2];
	int		e[2];
	int		x0;
	int		y0;

	x0 = xy[0];
	y0 = xy[1];
	xx[0] = abs(x - x0);
	xx[1] = x0 < x ? 1 : -1;
	yy[0] = abs(y - y0);
	yy[1] = y0 < y ? 1 : -1;
	e[0] = (xx[0] > yy[0] ? xx[0] : -yy[0]) / 2;
	while (x0 != x || y0 != y)
	{
		mlx_pixel_put(figure->mlx, figure->win, x0, y0, figure->color);
		e[1] = e[0];
		e[1] > -xx[0] ? e[0] -= yy[0] : 1 == 1;
		e[1] > -xx[0] ? x0 += xx[1] : 1 == 1;
		e[1] < yy[0] ? e[0] += xx[0] : 1 == 1;
		e[1] < yy[0] ? y0 += yy[1] : 1 == 1;
	}
}

void		check_cor(t_fig *figure)
{
	if (figure->check == 0)
	{
		figure->z = -5;
		figure->dx = WIDTH / 2;
		figure->dy = 50;
		figure->sx = WIDTH / (figure->w - 1);
		figure->sy = HEIGHT / (figure->h - 1);
		figure->color = 0x00FFFFFF;
	}
	figure->check++;
}

void		draw_lines(t_fig *figure, int x, int y)
{
	int		xy[2];

	xy[0] = figure->dx + (x - y);
	xy[1] = figure->dy + figure->map[y / figure->sy][x / figure->sx]
		* figure->z + x + y;
	if (x / figure->sx < figure->w - 1 && y / figure->sy < figure->h)
		draw_l(figure, xy, figure->dx + ((x + figure->sx) - y),
		figure->dy + figure->map[y / figure->sy][x / figure->sx + 1]
		* figure->z + (x + figure->sx) + y);
	if (y / figure->sy < figure->h - 1 && x / figure->sx < figure->w)
		draw_l(figure, xy, figure->dx + (x - (y + figure->sy)),
		figure->dy + figure->map[y / figure->sy + 1][x / figure->sx]
		* figure->z + x + (y + figure->sy));
}

void		draw(t_fig *figure)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	check_cor(figure);
	while (x / figure->sx < figure->w || y / figure->sy < figure->h - 1)
	{
		if (x / figure->sx == figure->w)
		{
			x = 0;
			y += figure->sy;
		}
		draw_lines(figure, x, y);
		x += figure->sx;
	}
	frame(figure);
}
