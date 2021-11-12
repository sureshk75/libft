/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 19:22:58 by schetty           #+#    #+#             */
/*   Updated: 2021/05/07 23:41:21 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (dest || src)
	{
		ptr1 = (unsigned char *)dest;
		ptr2 = (unsigned char *)src;
		while (n--)
			*ptr1++ = *ptr2++;
		return (dest);
	}
	return (NULL);
}
