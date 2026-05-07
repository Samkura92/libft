/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:38:50 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/01 12:35:50 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;

	i = 0;
	if (!little[0])
		return ((char *)big);
	len_little = ft_strlen(little);
	while (big[i] && i + len_little <= len)
	{
		if (ft_strncmp(&big[i], little, len_little) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*int	main()
{
	size_t n;
	char hay[] = "madamebonjour";
	char need[] = "bonjour";

	printf("%s\n", ft_strnstr(hay, need, 14));
	printf("%s\n", strnstr(hay, need, 14));
	return (0);	
}*/