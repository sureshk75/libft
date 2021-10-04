/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 00:42:46 by schetty           #+#    #+#             */
/*   Updated: 2021/05/18 21:52:30 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (!s)
		return (NULL);
	j = 0;
	while (s[j])
		j++;
	if (start > j)
		len = 0;
	else if (len > (j - start))
		len = j - start;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst)
	{
		if (len > 0)
		{
			i = -1;
			while (++i < len)
				dst[i] = s[start + i];
		}
		dst[len] = '\0';
	}
	return (dst);
}
