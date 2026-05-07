/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saoussai <saoussai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:14:36 by saoussai          #+#    #+#             */
/*   Updated: 2026/05/07 14:35:24 by saoussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_c_digit(int n)
{
	size_t	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	size_t	len_n;

	nb = n;
	len_n = ft_c_digit(nb);
	str = malloc(sizeof(char) * len_n + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	str [len_n] = '\0';
	while (nb > 0)
	{
		str[len_n - 1] = (nb % 10) + '0';
		nb = nb / 10;
		len_n--;
	}
	return (str);
}

/*int main()
{
    printf("%s\n", ft_itoa(-325));
    printf("%s\n", ft_itoa(325));
    printf("%s\n", ft_itoa(5));
    return (0); 
}*/