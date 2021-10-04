/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 22:25:11 by schetty           #+#    #+#             */
/*   Updated: 2021/05/11 16:07:49 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*itm;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		itm = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = itm;
	}
}
