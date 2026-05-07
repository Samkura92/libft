/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:06:49 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/01 12:36:43 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup( const char *src)
{
	char	*d;
	size_t	len_s;

	len_s = ft_strlen(src);
	d = (malloc(sizeof(char) * (len_s + 1)));
	if (d == NULL)
		return (NULL);
	else
		ft_strlcpy(d, src, len_s + 1);
	return (d);
}
/*int	main()
{
	char	*res;
	char	*res1;
	res = ft_strdup("itsme");
	res1 = strdup("itsme");
	printf("%p\n", res);
	printf("%p\n", res1);
	free(res);
	free(res1);
}*/