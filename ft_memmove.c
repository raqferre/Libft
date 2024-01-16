/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:26:56 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/06 11:53:30 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)

{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (source < dest)
	{
		while (n--)
		{		
		dest[n] = source[n];
		}
		return (dest);
	}
	ft_memcpy(dest, source, n);
	return (dest);
}	
