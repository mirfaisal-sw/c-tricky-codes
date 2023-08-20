#include <stdio.h>
#include <string.h>

void fillBuffer(char **ptr)
{
	/*string copy*/
	strcpy(*ptr,"Hello world");
}

int main()
{
    char buf[100];
    char *ptr = buf;
    
    fillBuffer(&ptr);
    
    printf("buf - %s \n",buf);
    getchar();

    return 0;
}
