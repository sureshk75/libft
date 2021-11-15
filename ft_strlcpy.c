/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 08:27:27 by schetty           #+#    #+#             */
/*   Updated: 2021/11/12 11:27:21 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		size -= 1;
		if (len < size)
			size = len + 1;
		else
			dst[size] = '\0';
		while (size--)
			dst[size] = src[size];
	}
	return (len);
}
