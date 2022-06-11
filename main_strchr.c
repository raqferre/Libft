#include <stdio.h>

//const char *ft_strchr(const char *str, int c)

//{
//	if (NULL == str)
//		return NULL;
	
//	while (*str && *str != (char)c)
//				 str++;


//	return (*str) ? str : NULL;

//}	


#include <string.h>

int main ()

{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   const char *ret;

	 ret = strchr(str, ch);
	printf("string after |%c| is - |%s|\n",ch,ret);

  
	const char str1[] = "testando";
	const char ch1 = 't';
	const char *ret1;

	const char *ft_strchr(const char *str, int c);

	ret1 = ft_strchr(str1,ch1);

	
   printf("String after |%c| is - |%s|\n", ch1, ret1);
   
   return(0);
}



