/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:18:58 by username          #+#    #+#             */
/*   Updated: 2026/05/06 10:31:55 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int sc)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)sc)
			return ((char *) &str[i]);
		i++;
	}
	if (str[i] == sc)
		return ((char *) & str[i]);
	else
		return (0);
}
/* int	main(void)
{
char	*s = "bonjour";
int		c = '\0';

printf("%s", ft_strchr(s, c));
}*/
