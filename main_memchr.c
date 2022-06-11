#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int c, size_t n)

{
	char *dest[] = (char *)str;

	int i = 0;

	while (dest[i] != (char*) c)
			{++i;}		


	return str[i];
}
	 
  

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = 'h';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
