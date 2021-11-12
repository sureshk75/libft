/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:05:20 by schetty           #+#    #+#             */
/*   Updated: 2021/11/12 01:50:29 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	s1_len = 0;
	while (s1[s1_len])
		s1_len++;
	start = 0;
	while (start < s1_len && ft_isset(s1[start], set))
		start++;
	end = s1_len;
	while ((end - 1) > start && ft_isset(s1[end - 1], set))
		end--;
	s1_len = end - start;
	str = malloc(sizeof(char) * (s1_len + 1));
	if (!str)
		return (NULL);
	str[s1_len] = '\0';
	while (s1_len--)
		str[s1_len] = s1[start + s1_len];
	return (str);
}
