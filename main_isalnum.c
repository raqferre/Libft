#include <stdio.h>
#include <ctype.h>

int main(void)

{

	char c;
	int result;

	c ='5';

	result = isalnum(c);
	printf ("When %c is passed, return value is %d\n",c, result);

	int ft_isalnum(int c);

	c = '+';
	result = ft_isalnum(c);
	printf("When %c is passed, return value is %d\n",c,result);

	return 0;

}	
		
