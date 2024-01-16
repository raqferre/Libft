/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:08:42 by raqferre          #+#    #+#             */
/*   Updated: 2022/06/24 12:45:49 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (n > 0)
	{	
		if (*str1 != *str2 && *str1 != '\0' && *str2 != '\0')
			return (*str1 - *str2);
		if (*str1 == '\0')
			return (*str1 - *str2);
		if (*str2 == '\0')
			return (*str1);
		n--;
		str1++;
		str2++;
	}	
	return (0);
}	
