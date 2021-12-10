/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstget.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 09:45:17 by schetty           #+#    #+#             */
/*   Updated: 2021/12/09 22:52:43 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstget(t_list *lst, int index)
{
	t_list	*ptr;
	int		i;

	if (lst)
	{
		i = -1;
		ptr = lst;
		while (ptr)
		{
			if (++i == index)
				return (ptr->content);
			ptr = ptr->next;
		}
	}
	return (NULL);
}
