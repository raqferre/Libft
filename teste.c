#include <stdio.h>

char *ft_strchr(char *str, int c)
{

 	strlen(str) = int n

	if(NULL == str)

		return NULL;	

	while (*str && *str !=(char)c)
				     str;
	
	return (*str) ? str : NULL ;
}


#include <stdio.h>
#include <string.h>

int main ()

{
   char str[] = "http://www.tutorialspoint.com";
   char ch = 'i';
   char *ret;
   char *ft_strchr(char *str, int c);

   ret = ft_strchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);
	printf("%s",ret);	
	

	const char str1[] = "testando";
	const char ch1 = '\0';
	char *ret1;
		
	ret1 = strchr(str1,ch1);
	
	printf("string after |%c| is - |%s|\n", ch1, ret1);
	



   return(0);
}



 
 
