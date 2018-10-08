/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 16:04:22 by vvysotsk          #+#    #+#             */
/*   Updated: 2017/12/21 16:04:23 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	j;

	j = 0;
	if (len == 0)
		return (0);
	while (*s1 && *s2 && *s1 == *s2 && j < len - 1)
	{
		s1++;
		s2++;
		j++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
