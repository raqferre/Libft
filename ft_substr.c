/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:43:35 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/08 16:37:54 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*ret;
	size_t	i;
	size_t	j;

	i = 0;
	j = start;
	if (n > ft_strlen(s))
		n = ft_strlen(s);
	ret = (char *) malloc (n + 1);
	if (!ret)
		return (NULL);
	while (i < n && j < (ft_strlen(s) +1))
	{
			ret[i] = s[j];
			j++;
			i++;
	}	
	ret[i] = '\0';
	return (ret);
}
