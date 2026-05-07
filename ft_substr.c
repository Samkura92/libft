/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:35:39 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/06 14:53:07 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	len_s;

	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	if (len == 0)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	else
		ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
/*int main()
{make
	char s[] = "abcdef";
	char *d = ft_substr(s, 2, 3);
	printf("%s", d);
	free(d);
}*/