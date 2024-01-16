/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:36:39 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/07 15:30:45 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	char	*out;
	size_t	out_len;
	size_t	i;

	i = 0;
	if (s == NULL || set == NULL)
		return ((char *)s);
	while ((s[i] != '\0' && (ft_strchr(set, s[i]) != NULL)))
			i++;
	out_len = ft_strlen(s) - 1;
	while ((out_len >= i) && (ft_strchr(set, s[out_len]) != NULL))
			out_len--;
	out = ft_substr((char *) &s[i], 0, (out_len - i) + 1);
	return (out);
}
