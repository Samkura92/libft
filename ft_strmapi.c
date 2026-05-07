/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 09:46:55 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/07 14:39:26 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(s);
	s2 = malloc(sizeof(char) * len_s + 1);
	if (s2 == 0)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s2[i] = f(i, s[i]);
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
/*char	ft_toupperr(unsigned int i, char c )
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main()
{
	char s[]= "bonjour";
	char *res = ft_strmapi(s, ft_toupperr);
	printf("%s\n", res);
	return (0);
	free(res);
}*/