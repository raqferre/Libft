# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raqferre <raqferre@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/18 20:15:20 by raqferre          #+#    #+#              #
#    Updated: 2022/06/18 15:27:29 by raqferre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include <libft.h>

void *ft_memset (void *str, int ch,size_t n)

{

	char *dest = (char *) str;

	int i = 0;
	
	while (i<n)

	{dest[i] = (char) ch;
		i++;}

	return str;

}	
