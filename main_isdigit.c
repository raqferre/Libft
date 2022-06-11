#include <stdio.h>
#include <ctype.h>


int main()

{

	char c;
	c='5';

	printf("Result when numeric character is passed: %d", isdigit(c));

	int ft_isdigit(int c);
	
	c='+';
	printf("\nResult when non numeric character is passed: %d",ft_isdigit(c));

	return 0;
}
