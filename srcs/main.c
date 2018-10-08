/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:21:48 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/09/18 19:21:50 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <fcntl.h>

void	fdf(t_fig *figure)
{
	if (parse(figure) == -1)
	{
		ft_putendl("Error");
		return ;
	}
	mlx(figure);
}

int		main(int argc, char **argv)
{
	t_fig	figure;

	if (argc == 2)
	{
		figure.name = argv[1];
		figure.fd = open(figure.name, O_RDONLY);
		fdf(&figure);
	}
	else
		ft_putendl("usage: ./fdf file");
	return (0);
}
