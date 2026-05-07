/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 10:22:37 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/01 12:44:45 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*c1;

	c1 = malloc(sizeof(t_list));
	if (!c1)
		return (NULL);
	c1->content = content;
	c1->next = NULL;
	return (c1);
}
