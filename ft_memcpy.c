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

void *ft_memcpy (void *restrict dest, const void *restrict src, size_t n)

{ 

	char *char_dest = (char*) dest;
	char *char_src = (char*) src;

	int i = 0;

	while (i<n)

	{char_dest[i] = char_src[i];
		++i;}

	return dest;

}	
		
