/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:58:15 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/02 16:33:47 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t ec, size_t size)
{
	char	*ptr;
	size_t	pl;

	if (__SIZE_MAX__ / ec < size)
		return (NULL);
	pl = ec * size;
	ptr = malloc(sizeof(char) * pl);
	if (ptr == NULL)
		return (NULL);
	else
		return (ft_memset(ptr, 0, pl));
}

/*int main()
{
	char *ptr = ft_calloc(5, sizeof(int));
	char *ptr2 = calloc(5, sizeof(int));
	printf("%p\n", ptr);
	printf("%p\n", ptr2);
	free(ptr);
	free(ptr2)
}*/
