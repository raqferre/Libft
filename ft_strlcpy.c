/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:28:02 by raqferre          #+#    #+#             */
/*   Updated: 2022/06/24 12:23:19 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)

{	
	size_t	i;
	size_t	dest;

	i = 0;
	dest = ft_strlen(src);
	if (dst == 0 || src == 0 || dstsize == 0)
		return (dest);
	while (i < (dstsize -1) && i < dest)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dest);
}	
