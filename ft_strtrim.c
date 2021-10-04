/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:05:20 by schetty           #+#    #+#             */
/*   Updated: 2021/05/12 19:54:14 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i])
		i++;
	start = 0;
	while (start < i && ft_isset(s1[start], set))
		start++;
	while ((i - 1) > start && ft_isset(s1[i - 1], set))
		i--;
	i -= start;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str)
	{
		str[i] = '\0';
		while (i--)
			str[i] = s1[start + i];
	}
	return (str);
}
