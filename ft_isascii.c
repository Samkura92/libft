/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:27:15 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/01 12:34:40 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)// verifie si le char est dans le tableau de asccii//
{
	if (!(c >= 0 && c <= 127))
		return (0);
	else
		return (1);
}
/*int main()
{
    printf("%d\n", ft_isascii('2'));
    printf("%d\n", ft_isascii(129));
}*/