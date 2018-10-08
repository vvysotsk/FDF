/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 15:47:15 by vvysotsk          #+#    #+#             */
/*   Updated: 2017/12/21 15:47:16 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = ft_strlen(s1);
	j = 0;
	if (!(dest = (char*)malloc(sizeof(*dest) * i + 1)))
		return (NULL);
	while (j <= i)
	{
		dest[j] = s1[j];
		j++;
	}
	return (dest);
}
