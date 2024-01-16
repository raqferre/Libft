/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:39:38 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/07 15:58:02 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))

{
	char	*out;
	int		i;
	int		x;

	i = 0;
	x = ft_strlen(s)+1;
	out = ft_strdup(s);
	if (!out || s == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		out[i] = f(i, s[i]);
						i++;
	}	
	return (out);
}	
