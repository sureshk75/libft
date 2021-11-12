/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 13:46:03 by schetty           #+#    #+#             */
/*   Updated: 2021/11/11 18:26:17 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*str;

	nb = n;
	len = !n;
	if (n < 0 && ++len)
		n = -n;
	while (n && ++len)
		n /= 10;
	if (nb < 0)
		nb = -nb;
	str = malloc(sizeof(char) * (len + 1));
	str[len] = '\0';
	if (nb == 0)
		str[--len] = '0';
	while (nb)
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (len)
		str[0] = '-';
	return (str);
}
