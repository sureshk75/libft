/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 01:42:49 by schetty           #+#    #+#             */
/*   Updated: 2021/05/20 23:55:08 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	init_vals(char const *s, char c, int *trek)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	*trek = ft_strlen(s);
	while (1)
	{
		if (s[i] == '\0')
			break ;
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			while (s[i] && s[i] != c)
				i++;
			count++;
		}
	}
	return (count);
}

static char	*get_str(char const *s, int *trek, char c)
{
	int	size;

	size = 0;
	while (*trek && s[*trek - 1] == c)
		*trek -= 1;
	while (*trek && s[*trek - 1] != c)
	{
		*trek -= 1;
		size++;
	}
	return (ft_substr(s, *trek, size));
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**str;
	int		trek;

	if (!s)
		return (NULL);
	count = init_vals(s, c, &trek);
	str = (char **)ft_calloc(sizeof(char *), count + 1);
	if (!str)
		return (NULL);
	while (count--)
	{
		str[count] = get_str(s, &trek, c);
		if (str[count] == NULL)
		{
			while (--count)
				free(str[count]);
			free(str);
			return (NULL);
		}
	}
	return (str);
}
