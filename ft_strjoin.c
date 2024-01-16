/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:49:26 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/08 16:38:34 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstring;
	size_t	strl1;
	size_t	strl2;

	strl1 = ft_strlen(s1);
	strl2 = ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	newstring = (char *) ft_calloc ((strl1 + strl2 +1), sizeof (char));
	if (!newstring)
		return (NULL);
	ft_strlcpy(newstring, s1, strl1 + 1);
	ft_strlcpy(newstring + strl1, s2, strl2 + 1);
	return (newstring);
}	
