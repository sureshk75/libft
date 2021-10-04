/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 23:01:53 by schetty           #+#    #+#             */
/*   Updated: 2021/05/09 22:28:05 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (dest == src || n == 0)
		return (dest);
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	if (ptr1 > ptr2)
	{
		ptr1 += n - 1;
		ptr2 += n - 1;
		while (n--)
			*ptr1-- = *ptr2--;
	}
	else
	{
		while (n--)
			*ptr1++ = *ptr2++;
	}
	return (dest);
}
