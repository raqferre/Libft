#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *strndup(const char *s)

	char dest*;

	dest = malloc (strlen(s));

	char out*;

	strcpy(out, s);

		









int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = strdup(source);
 
    printf("%p", target);
    return 0;
}
