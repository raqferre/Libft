/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raqferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 10:23:40 by raqferre          #+#    #+#             */
/*   Updated: 2022/06/21 16:25:11 by raqferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s,	size_t n)

{
	char	*dest;
	size_t	i;

	dest = (char *) s;
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
