/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 01:42:49 by schetty           #+#    #+#             */
/*   Updated: 2021/05/20 23:31:24 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	init_vals(char const *s, char c, int *trk)
{
	int	i;
	int	j;

	*trk = 0;
	while (s[*trk])
		*trk += 1;
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
	}
	return (j);
}

static char	*get_str(char const *s, int *trk, char c)
{
	int	size;

	size = 0;
	while (*trk && s[*trk - 1] == c)
		*trk -= 1;
	while (*trk && s[*trk - 1] != c)
	{
		*trk -= 1;
		size++;
	}
	return (ft_substr(s, *trk, size));
}

char	**ft_split(char const *s, char c)
{
	int		wrd;
	char	**str;
	int		trk;

	if (!s)
		return (NULL);
	wrd = init_vals(s, c, &trk);
	str = (char **)ft_calloc(sizeof(char *), wrd + 1);
	if (!str)
		return (NULL);
	while (wrd--)
	{
		str[wrd] = get_str(s, &trk, c);
		if (str[wrd] == NULL)
		{
			while (--wrd)
				free(str[wrd]);
			free(str);
			return (NULL);
		}
	}
	return (str);
}
