/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:08:31 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/01 12:34:56 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	unsigned char	*mb;
	size_t			i;

	mb = (unsigned char *) memoryBlock;
	i = 0;
	while (i < size)
	{
		if (mb[i] == (unsigned char) searchedChar)
			return ((char *) & mb[i]);
		i++;
	}
	return (0);
}
/*int	main(void)
{
char	mB[] = "Bonjour";

printf("%s\n", ft_memchr(mB, 'j', 7));
printf("%s\n", memchr(mB, 'j', 7));
}*/
