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
	char	*ret;
	size_t	len;

	if (nitems == 0 || size == 0)
	{
		nitems = 1;
		size = 1;
	}
	len = nitems * size;
	ret = malloc(sizeof(ret) * len);
	if (ret)
	{
		while (len--)
			ret[len] = 0;
	}
	return (ret);
}
