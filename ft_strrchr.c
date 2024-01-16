/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:08:11 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/08 16:37:16 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while ((len +1) > 0)
	{	
		if (s[len] == (char) c)
			return ((char *)&s[len]);
		len--;
	}		
	return (NULL);
}
