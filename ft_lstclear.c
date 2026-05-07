/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 11:11:48 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/02 11:42:49 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*sauv;

	if (lst == NULL || del == NULL)
		return ;
	while ((*lst) != NULL)
	{
		sauv = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = sauv;
	}
}
