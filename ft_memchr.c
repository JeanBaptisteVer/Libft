/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvermeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:34:27 by jvermeer          #+#    #+#             */
/*   Updated: 2022/05/10 15:23:29 by jvermeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c_two;
	unsigned char	*src;

	c_two = (unsigned char)c;
	src = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*src == c_two)
			return (src);
		src++;
	}
	return (NULL);
}
