/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:05:11 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/06 10:36:15 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*j;

	j = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			j = &s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *) &s[i]);
	else
		return ((char *)j);
}
/*int main()
{
	char *s = "bonjour";
	int c = '0';
	printf("%s", ft_strrchr(s, c));
	printf("%s", strrchr(s, c));
}*/