/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:24:12 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/07 14:40:07 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_test_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	i;
	size_t	j;

	len_s1 = ft_strlen(s1);
	i = 0;
	j = len_s1 -1;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_test_set(s1[i], set))
		i++;
	while (j > i && ft_test_set(s1[j], set))
		j--;
	return (ft_substr(s1, i, j - i + 1));
}
/*int main()
{
	char s1[] = "abcokabcokabc";
	char set[] = "abc";
	char *ptr = ft_strtrim(s1, set);
	printf("%s", ptr);
	free(ptr);
}*/