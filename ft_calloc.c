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

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

void *ft_calloc(size_t nmemb, size_t size)

{

	void *rtr;
	void *dest;

	rtr = malloc (nmemb * size);

	dest = ft_bzero(rtr,nmemb);
	
	if (nmemb == 0)
	return NULL;

	else return dest;

}	
