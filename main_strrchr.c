#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	 	unsigned int x = strlen(s-1);
   							
		if (NULL == s)
		 return NULL;

		while (*s && *s[9] !=(char)c)
			s--;

		return *s ? s: NULL;
		
}

int main(void)
{
	    char s[] = "tome,data,in,commaz";
		
		char *ft_strchr(const char *s , int c);		
		char *comma = ft_strchr(s,',');

		int c = strlen(comma);

		printf("%s\n", comma);
		
		printf("%c\n", comma [c -1]);

		return 0;

}									    

