/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:07:41 by schetty           #+#    #+#             */
/*   Updated: 2021/05/06 22:55:21 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char			*ptr1;
	unsigned char	ptr2;

	ptr1 = s;
	ptr2 = (unsigned char)c;
	while (n--)
		*ptr1++ = ptr2;
	return (s);
}
