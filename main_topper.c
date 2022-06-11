#include <stdio.h>
#include <ctype.h>

int main(void)

{

	char c;
	int result;

	c='S';
	result = tolower(c);
	printf ("When %c is passed, return value is %c\n",c, result);

	int ft_tolower(int c);

	c = 'P';
	result = ft_tolower(c);
	printf ("When %c is passed, return value is %c\n",c, result);

	return 0;

}	


		
