#include <stdio.h>
#include <ctype.h>

int main(void)

{	

	char c;
	int result;

	c='5';

	result = isprint(c);
	printf ("When %c is passed, return value is %d\n",c,result);

	int ft_isprint(int c);
	c = '\n';
	result = ft_isprint(c);
	printf("When %c is passed, return value is %d\n",c,result);

}	
