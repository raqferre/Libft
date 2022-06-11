#include <stdio.h>
#include <ctype.h>

int main(void)


{

	char c;
	int result;

	c='s';
	result = toupper(c);
	printf ("When %c is passed, return value is %c\n",c, result);

	int ft_toupper(int c);

	c = '9';
	result = ft_toupper(c);
	printf ("When %c is passed, return value is %c\n",c, result);

	return 0;
}	

