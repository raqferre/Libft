/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:05:38 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/07 13:49:48 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len;

	len = ft_strlen(s2);
	if (!(*s2))
		return ((char *) s1);
	while ((*s1 != '\0') && (n >= len))
	{
		if ((*s1 == *s2) && (ft_strncmp(s2, s1, len) == 0))
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
