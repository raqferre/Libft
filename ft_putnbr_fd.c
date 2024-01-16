/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:42:54 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/06 11:38:50 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	out;

	out = (long) n;
	if (out < 0)
	{
		ft_putchar_fd('-', fd);
		out = out * -1;
	}		
	if (out / 10)
	{
		ft_putnbr_fd((out / 10), fd);
	}
	ft_putchar_fd((out % 10 + 48), fd);
}
