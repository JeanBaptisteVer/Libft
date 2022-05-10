/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvermeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:33:17 by jvermeer          #+#    #+#             */
/*   Updated: 2021/01/06 15:39:42 by jvermeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	lendst;
	unsigned int	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	while (src && dst && src[i] != 0 && (lendst + i) < (size - 1))
	{
		dst[lendst + i] = src[i];
		i++;
	}
	if (i < size)
		dst[lendst + i] = '\0';
	if (lendst > size)
		return (lensrc + size);
	else
		return (lensrc + lendst);
}
