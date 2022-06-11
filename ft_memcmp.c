#include <stdio.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)

{

	char *dest1 = (char *) str1;
	char *dest2 = (char *) str2;

	if (dest1[n] == dest2[n])
		return 0;

	else if (dest1[n] > dest2[n])
		return -1;

	else
		return 1;

}	
