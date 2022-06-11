#include <libft.h>

size_t ft_strlen(const char *s)

{ 

	size_t x = 0;

	while (s[x] != '\0')
	
		++x;	
	
	return x;

}



