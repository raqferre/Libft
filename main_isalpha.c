#include <stdio.h>
#include <ctype.h>


int main ()
{

	int var1 = 'd';
	int var2 = '9';

 	if(isalpha(var1)) 

	{printf("var1 = |%c| is an alphabetic\n",var1);}

	else

	{printf("var1 = |%c| is not an alphabetic\n",var1);}

	int ft_isalpha(int c);

	if(ft_isalpha(var2))

	{printf("var2 = |%c| is an alphabetic\n",var2);}

	else		
	
	{printf("var2 = |%c| is not an alphabetic",var2);} 
		
	return 0;

	
}		

