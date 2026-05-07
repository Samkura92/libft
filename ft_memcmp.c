/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:14:43 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/06 10:01:13 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointeur1, const void *pointeur2, size_t size)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char *) pointeur1;
	ptr2 = (unsigned char *) pointeur2;
	i = 0;
	while (i < size)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	int	ptr1[] = {54, 58, 20};
	int ptr2[] = {54, 85, 20};
	printf("%d\n", ft_memcmp(ptr1, ptr2, 6));
	printf("%d\n", memcmp(ptr1, ptr2, 6));
}*/