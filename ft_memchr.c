/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:14:32 by raqferre          #+#    #+#             */
/*   Updated: 2022/06/24 12:21:20 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)

{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *) b;
	while (i < len)
	{
		if (s [i] == (char) c)
			return ((void *)&s[i]);
							i++;
	}
	return (NULL);
}	
