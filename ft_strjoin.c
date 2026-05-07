/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:35:28 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/01 12:35:23 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s2;
	size_t	len_s1;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ptr = malloc(sizeof(char) * (len_s2 + len_s1 + 1));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, len_s1 + 1);
	ft_strlcat(ptr, s2, (len_s2 + len_s1 + 1));
	return (ptr);
}
/*int main()
{
	char d[] = "ok";
	char s[] = "ok";
	char	*res = ft_strjoin(d, s);
	printf("%s", res);
	free(res);
}*/