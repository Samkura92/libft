/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:47:30 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/01 12:35:02 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t count)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < count)
	{
		p[i] = (unsigned char) value;
		i++;
	}
	return (ptr);
}
/*int main()
{
    char str[] = "bonjour";
    prinft("%s", ft_memset(str, 'a', 3));
    prinft("%s", memset(str, 'a', 3));

}*/