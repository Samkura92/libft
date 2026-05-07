/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:54:47 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/01 12:34:45 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int d)// verifie si le char est un digit//
{
	if (!(d >= '0' && d <= '9'))
		return (0);
	else
		return (1);
}
/*int	main()
{
	printf("%d", ft_isdigit('a'));
}*/