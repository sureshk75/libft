/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:02:16 by schetty           #+#    #+#             */
/*   Updated: 2021/05/08 22:18:40 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (dst[i])
		i++;
	if (i < size)
	{
		size -= i;
		dst += i;
		while (*src && --size)
		{
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	else if (i > size)
		i = size;
	while (*src++)
		i++;
	return (i);
}
