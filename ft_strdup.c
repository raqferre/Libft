/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 15:16:45 by raqferre          #+#    #+#             */
/*   Updated: 2022/07/07 15:55:45 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	char	*out;
	int		i;

	i = ft_strlen(s) + 1;
	ret = malloc(ft_strlen(s)+1);
	if (!ret)
		return (NULL);
	{
		out = ft_memcpy(ret, s, i);
		return (out);
	}
}	
