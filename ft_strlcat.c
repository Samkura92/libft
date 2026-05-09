/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 09:39:31 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/09 13:20:28 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	if (size <= len_dest)
		return (len_src + size);
	else
		ft_strlcpy (&dest[len_dest], src, size - len_dest);
	return (len_dest + len_src);
}

/*int main(void)
{
    char dest[]= "hello";
    char src[]= "itsme";
    printf("%zu\n", ft_strlcat(dest, src, 6));
    printf("%zu\n", strlcat(dest, src, 6));
}*/