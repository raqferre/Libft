#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void *ft_calloc(size_t nmemb, size_t size)
//{

//		void *rtr;
//		void *dest;

//		rtr = malloc (nmemb * size);
			
//		dest = bzero (rtr,nmemb);

//		if (nmemb == 0)
//		return NULL;
		
//		else
//			return dest;
//}		


	int main(void)

{


	int *p;
	void *ft_calloc(size_t nmeb, size_t size);
	p = (int *)ft_calloc(5, sizeof(int));
	

	printf ("%i", *p);

	return 0;

}	
