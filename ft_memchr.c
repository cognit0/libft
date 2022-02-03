/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:22:39 by yerkiral          #+#    #+#             */
/*   Updated: 2022/02/02 20:50:34 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	if (!s && !n)
		return (0);
	if (c > 255)
		c -= 256;
	str = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)(str + i));
		i++;
	}
	return (0);
}
