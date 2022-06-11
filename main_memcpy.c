#include <stdio.h>
#include <string.h>

int main(void)

{	

	char src[] = "copy this";
	char dest[100];

	char *dest_ptr = memcpy(dest, src,1);

	printf("src: %s\n",src);
	printf("dest:%s\n",dest);
	printf("dest_ptr: %p\n", dest_ptr);
	printf("dest: %p\n", dest);


void *ft_memcpy(void restrict *dest, const void restrict *src, size_t n);

	char src1[] = "testando";

	char dest1[100];

char *dest_ptr1 = ft_memcpy(dest1,src1,1);

	printf("src1: %s\n",src1);
	printf("dest1: %s\n",dest1);
	printf("dest_ptr1: %p\n", dest_ptr1);
	printf("dest1: %p\n", dest1);


	return 0;
	
}	
