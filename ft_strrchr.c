/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:58:20 by schetty           #+#    #+#             */
/*   Updated: 2021/11/12 11:23:17 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (c > CHAR_MAX)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	while (s[i] != c)
	{
		if (i-- == 0)
			return (NULL);
	}
	return ((char *)s + i);
}
