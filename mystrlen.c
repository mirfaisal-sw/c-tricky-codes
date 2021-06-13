
/*******************************************************************
 * Question : Implement your own strlen() function.
 * *****************************************************************/

/********************************************************************
 *Standard strlen() function:-
 *	#include <string.h>
 *      size_t strlen(const char *s);
 *      
 *      Description: - The strlen() function calculates the length 
 *      of the string s, excluding the terminating null byte ('\0').
 *
 *      Return value: - The strlen() function returns the number of 
 *      bytes in the string s.
 *********************************************************************/

#include <stdio.h>
#include <stdint.h>

uint32_t mystrlen(const char *str)
{
	uint32_t cnt = 0;

	while(*str != '\0')
	{
		cnt++;
		str++;
	}

	return cnt;
}

int main()
{
	char *ptr = "Hi, I am Mir Faisal.";

        printf("Str length = %d\n",mystrlen(ptr));

	return 0;
}

