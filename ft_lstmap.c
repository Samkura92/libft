/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 11:32:14 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/02 11:43:09 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void(*del)(void *))
{
	t_list	*new;
	t_list	*new_l;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_l = NULL;
	while (lst != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new == NULL)
		{
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new_l, new);
		lst = lst->next;
	}
	return (new_l);
}
