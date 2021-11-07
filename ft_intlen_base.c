/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 12:50:20 by schetty           #+#    #+#             */
/*   Updated: 2021/10/02 16:58:25 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen_base(unsigned long long num, int base)
{
	static int	len = 0;

	if (num > 0)
	{
		while (num > 0)
		{
			num /= base;
			len += 1;
		}
	}
	else
		len = 1;
	return (len);
}
