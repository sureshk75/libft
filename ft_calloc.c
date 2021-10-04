/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:42:09 by schetty           #+#    #+#             */
/*   Updated: 2021/05/12 19:53:34 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	i = nitems * size;
	ptr1 = (char *)malloc(sizeof(char) * i);
	if (ptr1)
	{
		ptr2 = ptr1;
		while (i--)
			*ptr2++ = 0;
	}
	return (ptr1);
}
