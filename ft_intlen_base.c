/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schetty <schetty@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:11:29 by schetty           #+#    #+#             */
/*   Updated: 2021/11/11 18:14:42 by schetty          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intlen_base(int n, int base)
{
	int		len;
	long	nbr;

	len = !n;
	nbr = n;
	if (n < 0)
		nbr *= -1;
	while (nbr)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
