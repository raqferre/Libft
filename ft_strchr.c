#include <stdio.h>
const char *ft_strchr(const char *str, int c)

{
	if (NULL == str)
		return NULL;
	
	while(*str && *str != (char)c)
			str++;
			
	return (*str) ? str: NULL;

}	
	
