/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:21:55 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/09/18 19:21:56 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int			zone(t_fig *figure, char *str)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_strsplit(str, ' ');
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	if (figure->h == 0)
		figure->w = i;
	else
	{
		if (i != figure->w)
			return (-1);
	}
	free(str);
	free(tab);
	figure->h++;
	return (0);
}

int			reader(t_fig *figure)
{
	char	*str;
	int		temp;

	str = NULL;
	figure->h = 0;
	figure->w = 0;
	while ((temp = get_next_line(figure->fd, &str)) > 0)
	{
		if (zone(figure, str) == -1)
			return (-1);
	}
	figure->map = ft_memalloc(sizeof(int*) * figure->h);
	close(figure->fd);
	figure->fd = open(figure->name, O_RDONLY);
	return (0);
}

int			parse(t_fig *figure)
{
	char	*str;
	char	**tab;
	int		xy[3];

	xy[1] = 0;
	if (reader(figure) == -1)
		return (-1);
	while ((xy[2] = get_next_line(figure->fd, &str)) > 0)
	{
		xy[0] = 0;
		tab = ft_strsplit(str, ' ');
		figure->map[xy[1]] = ft_memalloc(sizeof(int) * figure->w);
		while (tab[xy[0]] != NULL)
		{
			figure->map[xy[1]][xy[0]] = ft_atoi(tab[xy[0]]);
			free(tab[xy[0]]);
			xy[0]++;
		}
		free(tab);
		xy[1]++;
	}
	return ((xy[2] == -1) ? -1 : 0);
}
