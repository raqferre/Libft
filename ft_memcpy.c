/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:19:02 by raqferre          #+#    #+#             */
/*   Updated: 2022/06/24 12:20:00 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)

{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	char_dest = (char *) dest;
	char_src = (char *) src;
	i = 0;
	if (dest == 0 && src == 0 && n > 0)
		return (0);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		++i;
	}
	return (dest);
}
