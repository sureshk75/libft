/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 01:06:33 by schetty           #+#    #+#             */
/*   Updated: 2021/05/08 02:20:26 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	ptr2;

	ptr1 = (unsigned char *)s;
	ptr2 = (unsigned char)c;
	while (n--)
	{
		if (*ptr1 == ptr2)
			return (ptr1);
		ptr1++;
	}
	return (NULL);
}
