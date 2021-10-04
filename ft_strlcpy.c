/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 08:27:27 by schetty           #+#    #+#             */
/*   Updated: 2021/05/09 15:50:04 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (src)
	{
		i = 0;
		while (src[i])
			i++;
		if (size > 0)
		{
			while (*src && --size)
				*dst++ = *src++;
			*dst = '\0';
		}
		return (i);
	}
	return (0);
}
