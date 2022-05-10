/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvermeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:26:31 by jvermeer          #+#    #+#             */
/*   Updated: 2022/05/10 15:21:13 by jvermeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pass_begin(const char *nptr, int *neg)
{
	int	i;

	i = 0;
	if (!nptr[i])
		return (-1);
	while (nptr[i] == ' ' || !(ft_isprint(nptr[i])) || nptr[i] == 27)
	{
		if (nptr[i] == 27)
			return (-1);
		i++;
	}
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			*neg = -1;
		i++;
	}
	if (!ft_isdigit(nptr[i]))
		return (-1);
	return (i);
}

int	ft_atoi(const char *nptr)
{
	size_t	res;
	int		neg;
	int		i;

	res = 0;
	neg = 1;
	i = pass_begin(nptr, &neg);
	if (i == -1)
		return (0);
	while (ft_isdigit(nptr[i]) && nptr[i])
	{
		res = res + (nptr[i] - '0');
		i++;
		if (ft_isdigit(nptr[i]))
			res = res * 10;
	}
	res = res * neg;
	return (res);
}
