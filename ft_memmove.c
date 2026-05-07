/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:01:23 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/06 10:23:01 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;
	int				sens;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!s && !d)
		return (d);
	if (d <= s)
	{
		i = 0;
		sens = 1;
	}
	if (d > s)
	{
		i = size -1;
		sens = -1;
	}
	while ((sens == 1 && (size_t)i < size) || (sens == -1 && i >= 0))
	{
		d[i] = s[i];
		i += sens;
	}
	return (dest);
}

/*int main()
{
    char des[] = "hello";
    char src[] = "itsme";
	ft_memmove(des, src, 6);
    printf("%s\n", src);
	memmove(des, src, 6);
	printf("%s\n", src);
}*/
