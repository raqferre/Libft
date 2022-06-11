#include <stdio.h>
#include <string.h>

//void *ft_memset (void *str, int ch, size_t n)


//{		
//		char *dest = (char *) str;
		
//		int i=0;

//		while (i<n)

//		{dest[i] = (char) ch;
//			i++;}
//
//		return str;

//}		
		

int main()

{

//	char str[30] = "ABCD EFGH";
//	printf("Before memset: %s",str);
//	memset(str,33,3);
//	printf("\nAfter memset: %s\n",str);

	

	void *ft_memset(void *str, int ch, size_t n);

	char str1[30] = "ABCDEFGH";
	printf("Before ft_memset: %s",str1);
	ft_memset(str1,33,4);
	printf("\nAfter ft_memset:%s",str1);

	return 0;

}	

