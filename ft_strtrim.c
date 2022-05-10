/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvermeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:33:33 by jvermeer          #+#    #+#             */
/*   Updated: 2022/05/10 15:10:19 by jvermeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inset(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static int	where_is_end(char const *s1, char const *set)
{
	char const	*p;
	int			i;

	i = 0;
	p = s1;
	while (p[i])
		i++;
	i--;
	while (inset(p[i], set))
		i--;
	return (++i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	start = 0;
	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (NULL);
	while (inset(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_strdup(""));
	len = where_is_end(s1, set);
	return (ft_substr(s1, start, (len - start)));
}
