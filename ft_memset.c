/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:04:46 by raqferre          #+#    #+#             */
/*   Updated: 2022/06/17 14:17:20 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int ch, size_t n)

{
	char	*dest;
	size_t	i;

	dest = (char *) str;
	i = 0;
	while (i < n)
	{
		dest[i] = (char) ch;
		i++;
	}
	return (str);
}	
