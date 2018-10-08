/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvysotsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 16:04:03 by vvysotsk          #+#    #+#             */
/*   Updated: 2018/01/17 19:21:39 by vvysotsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int	index1;
	int	index2;

	index1 = 0;
	index2 = 0;
	if (!*to_find)
		return ((char *)str);
	while (str[index1] && index1 < len)
	{
		index2 = 0;
		while (to_find[index2] == str[index1 + index2] && index1 + index2 < len)
		{
			if (!to_find[index2 + 1])
				return ((char *)str + index1);
			index2++;
		}
		index1++;
	}
	return (0);
}
