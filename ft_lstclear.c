/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishimot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 02:00:04 by rishimot          #+#    #+#             */
/*   Updated: 2020/07/17 22:45:01 by rishimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;
	t_list	*tmp;

	if (lst == NULL || !del)
		return ;
	now = *lst;
	while (now)
	{
		tmp = now->next;
		ft_lstdelone(now, del);
		now = tmp;
	}
	*lst = NULL;
}
