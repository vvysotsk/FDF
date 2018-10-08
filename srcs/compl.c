/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:24:43 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/09/18 19:24:44 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void		zoom(int key, t_fig *figure)
{
	if (key == 69 && figure->sx * 2 <= 500 && figure->sy * 2 <= 500)
	{
		mlx_clear_window(figure->mlx, figure->win);
		figure->sx *= 2;
		figure->sy *= 2;
		figure->z *= 2;
		draw(figure);
	}
	if (key == 78 && figure->sx * 0.5 >= 1 && figure->sy * 0.5 >= 1 &&
		(-figure->z * 0.5 >= 1 || figure->z * 0.5 >= 1))
	{
		mlx_clear_window(figure->mlx, figure->win);
		figure->sx *= 0.5;
		figure->sy *= 0.5;
		figure->z *= 0.5;
		draw(figure);
	}
}

int			esc(void)
{
	exit(0);
	return (0);
}

void		decal(int key, t_fig *figure)
{
	if ((key >= 123 && key <= 126) || key == 15)
	{
		mlx_clear_window(figure->mlx, figure->win);
		if (key == 123)
			figure->dx -= 50;
		if (key == 126)
			figure->dy -= 50;
		if (key == 124)
			figure->dx += 50;
		if (key == 125)
			figure->dy += 50;
		if (key == 15)
			figure->check = 0;
		draw(figure);
	}
}

int			keyboard(int key, t_fig *figure)
{
	if (key == 53)
		esc();
	if (key == 67)
	{
		mlx_clear_window(figure->mlx, figure->win);
		figure->z += 2;
		draw(figure);
	}
	if (key == 75)
	{
		mlx_clear_window(figure->mlx, figure->win);
		figure->z -= 2;
		draw(figure);
	}
	if (key == 8)
	{
		mlx_clear_window(figure->mlx, figure->win);
		if (figure->check % 11 == 0)
			figure->color = 0xFF000000;
		figure->color = figure->color >> 2;
		draw(figure);
	}
	zoom(key, figure);
	decal(key, figure);
	return (0);
}

void		mlx(t_fig *figure)
{
	figure->check = 0;
	figure->mlx = mlx_init();
	figure->win = mlx_new_window(figure->mlx, WIDTH, HEIGHT, "Fdf");
	draw(figure);
	mlx_key_hook(figure->win, keyboard, figure);
	mlx_hook(figure->win, 17, (1L << 17), esc, figure);
	mlx_loop(figure->mlx);
}
