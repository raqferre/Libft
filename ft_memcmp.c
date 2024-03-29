/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:50:47 by raqferre          #+#    #+#             */
/*   Updated: 2022/06/29 15:51:59 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*dest1;
	unsigned char	*dest2;

	dest1 = (unsigned char *) str1;
	dest2 = (unsigned char *) str2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*dest1 != *dest2)
			return (*dest1 - *dest2);
	n--;
	dest1++;
	dest2++;
	}	
	return (0);
}	
