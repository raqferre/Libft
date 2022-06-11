#include <stdio.h>
#include <string.h>

//void ft_bzero(void *s,size_t n)


//{
//	char *dest = (char *) s;
	
//	char c = '\0';

//	int i= 0;

//	while (i<n)
	
//	{dest[i] = c;
//		i++;}

//}

	int main()

{ 
    char str[30] = "ABCD EFGH";
	printf("Before bzero: %s",str);
	bzero(str,4);
	printf("\nAfter bzero:%s\n",str);

	void ft_bzero(void *s,size_t n);

	char str1[30] = "ABCDEF";
	printf("Before ft_bzero: %s",str1);
	ft_bzero(str1,2);
	printf("\nAfter ft_bzero:%s\n",str1);

	return 0;

}	

