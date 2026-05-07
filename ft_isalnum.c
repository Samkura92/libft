/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 16:10:14 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/01 12:34:07 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int cd)// verifie si le char est un alphabet et numeric//
{
	if (!((cd >= 'a' && cd <= 'z') || (cd >= 'A' && cd <= 'Z')
			|| (cd >= '0' && cd <= '9')))
		return (0);
	else
		return (1);
}
/*int	main()
{
	printf("%d\n", ft_isalnum('3'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('!'));
}*/