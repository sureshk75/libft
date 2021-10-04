/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 22:06:27 by schetty           #+#    #+#             */
/*   Updated: 2021/05/08 01:49:36 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned char	ptr3;

	i = -1;
	ptr1 = (unsigned char *)dest;
	ptr2 = (unsigned char *)src;
	ptr3 = (unsigned char)c;
	while (++i < n)
	{
		ptr1[i] = ptr2[i];
		if (ptr2[i] == ptr3)
			return (ptr1 + i + 1);
	}
	return (NULL);
}
