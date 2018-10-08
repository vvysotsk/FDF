/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 00:07:34 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/02/07 00:07:35 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	char *dest;

	if (!(dest = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	dest = ft_strncpy(dest, str, n);
	dest[n] = '\0';
	return (dest);
}
