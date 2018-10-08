/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 19:14:39 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/01/17 18:50:05 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	buffer[n];

	if (n > 128 * 1024)
		return (NULL);
	ft_memcpy(buffer, src, n);
	ft_memcpy(dest, buffer, n);
	return (dest);
}
