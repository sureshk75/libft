/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 09:34:09 by schetty           #+#    #+#             */
/*   Updated: 2021/11/12 11:27:01 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if (c > CHAR_MAX)
		return (NULL);
	i = -1;
	while (s[++i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
	}
	return ((char *)s + i);
}
