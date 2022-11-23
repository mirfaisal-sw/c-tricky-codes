#include <stdio.h>
#include <string.h>

int main()
{
        char *str = "Hello world";
        char **ptr;

		ptr = &str;
    
        printf("Address of str - %p\n", str);
        printf("Address of *ptr - %p\n", *ptr);

        printf("String - %s\n", str);
        printf("String - %s\n", *ptr);

        return 0;
}

Output: -
	Address of str -  0x55d3c951d004
	Address of *ptr - 0x55d3c951d004
	String - Hello world
	String - Hello world
