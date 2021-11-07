/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:27:18 by schetty           #+#    #+#             */
/*   Updated: 2021/05/18 23:19:04 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	static size_t	i = 0;
	static long		val = 0;
	static int		neg = 1;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			neg = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		val = val * 10 + (str[i++] - '0');
		if (neg == 1 && val > INT_MAX)
			return (-1);
		else if (neg == -1 && (val - 1) > INT_MAX)
			return (0);
	}
	return ((signed int)val * neg);
}
