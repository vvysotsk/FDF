/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:07:49 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/01/17 18:45:12 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			index;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		s1[index] = s2[index];
		if (s2[index] == (unsigned char)c)
			return (dest + index + 1);
		++index;
	}
	return (NULL);
}
