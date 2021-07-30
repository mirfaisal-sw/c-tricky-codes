
/************************************************************************************
* Question -  Write a function to return stream of bytes.
*
* Challenge - The return statement should not return a pointer that 
* has the address of a local variable because, as soon as the function
* exits, all local variables are destroyed and your pointer will be pointing 
* to someplace in the memory that you no longer own.
* If a pointer is referring to an object that is destroyed, the pointer is said 
* to be a dangling pointer until it is given a new value.
* 
* Solution - Since the problem is that the return address is actually of a local
* variable, the solution would be to dynamically allocate memory to a variable to
* hold the address and pass it to the function as a parameter.
*
**************************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char* funcReturn(char *bytes, uint8_t len)
{
	char *ptr;
	ptr = bytes;
	for (uint8_t i = 0;i<len;i++)
	{
		*ptr = (char) (*ptr + 1);
		ptr++;
	}

	return bytes ;
}

int main()
{
	char *buf = (char*)malloc(10);
	char *ptr = "ABCDEFGHI";

	/*initialize that allocated memory location*/
	memcpy(buf,ptr,10);
        printf("malloc - %s\n",buf);

	buf = funcReturn(buf,10);
	buf[9] = 0;
        printf("output - %s\n",buf);

	return 0;
}

