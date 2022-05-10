/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvermeer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 16:41:14 by jvermeer          #+#    #+#             */
/*   Updated: 2020/12/28 17:51:09 by jvermeer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*swap;

	tmp = *lst;
	*lst = NULL;
	while (tmp)
	{
		swap = tmp;
		tmp = tmp->next;
		ft_lstdelone(swap, del);
	}
}
