/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:02:16 by schetty           #+#    #+#             */
/*   Updated: 2021/11/10 19:02:57 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (dst[len] && len < size)
		len++;
	if (len < size)
	{
		size -= len;
		dst += len;
		while (*src && --size)
		{
			*dst++ = *src++;
			len++;
		}
		*dst = '\0';
	}
	else if (len > size)
		len = size;
	while (*src++)
		len++;
	return (len);
}
