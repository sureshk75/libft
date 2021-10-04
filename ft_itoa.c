/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:46:03 by schetty           #+#    #+#             */
/*   Updated: 2021/05/12 19:56:20 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	init_val(int *n, int *neg)
{
	long	nb;

	nb = *n;
	*neg = 0;
	if (nb < 0)
	{
		*neg = 1;
		nb *= -1;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	long	nb;
	char	*str;

	nb = init_val(&n, &neg);
	len = ft_intlen(nb) + neg;
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb == 0)
		str[len--] = '0';
	if (neg)
		str[0] = '-';
	while (nb > 0)
	{
		str[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
