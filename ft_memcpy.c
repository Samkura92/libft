/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:31:19 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/06 10:03:34 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!s && !d)
		return (d);
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int main()
{
    char des[] = "he";
    char src[] = "bonjour";
    printf("%s", ft_memcpy(des, src, 8));
}*/