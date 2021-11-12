/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 21:42:09 by schetty           #+#    #+#             */
/*   Updated: 2021/11/11 18:14:39 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	len;
	char	*ret;

	if (nitems == 0 || size == 0)
		len = 1;
	else
		len = nitems * size;
	ret = malloc(sizeof(char) * len);
	if (ret)
	{
		while (len--)
			ret[len] = 0;
	}
	return (ret);
}
