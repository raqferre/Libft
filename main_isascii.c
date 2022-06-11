#include <stdio.h>
#include <ctype.h>

int main (void)

{		

	char c;
	int result;

	c= 'j';

	result = isalnum(c);
	printf ("When %c is passed, return value is %d\n",c, result);

	int ft_isascii(int c);
	c = '+';

	result = ft_isascii(c);
	printf ("When %c is passed, return value is %d\n",c,result);

}

		

