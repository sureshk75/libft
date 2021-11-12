/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:27:18 by schetty           #+#    #+#             */
/*   Updated: 2021/11/09 23:22:02 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	long	val;
	int		neg;

	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	neg = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1;
	}
	val = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10) + (str[i++] - '0');
		if (neg == 1 && val > INT_MAX)
			return (-1);
		if (neg == -1 && (val - 1) > INT_MAX)
			return (0);
	}
	return ((signed int)val * neg);
}
