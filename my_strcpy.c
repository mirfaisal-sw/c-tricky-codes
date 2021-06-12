
/*******************************************************************************************
 *  Standard strcpy() function:-
 *  #include <string.h>
 *  char *strcpy(char *dest, const char *src);
 *
 *  Description: - 
 *  The  strcpy()  function  copies the string pointed to by src, including the
 *  terminating null byte ('\0'), to the buffer pointed to by dest.
 *  Destination string "dest" must be large enough to receive the copy.  Beware of
 *  buffer  overruns!
 *
 *  Return value: - The strcpy() function return a pointer to the destination string "dest".
 *
 *  Bugs: -
 *  If  the  destination  string  of  a strcpy() is not large enough, then anything might happen.
 *  The strcpy() function does not specify the size of the destination array, so buffer overrun 
 *  is often a risk. Using strcpy() function to copy a large character array into smaller one is
 *  dangerous. 
 *  Any time a program reads or copies data into a buffer, the  program first  needs to check 
 *  that there's enough space. [Xilinx Interview question on this concept was asked.]
 *
 *
 *
 *  Implementation of mystrcpy() funbction is as below.
 *********************************************************************************************/

#include <stdio.h>

char *mystrcpy(char *dst, const char *src)
{
	char* origDest = dst;

	while(*src != '\0')
	{
        	*dst = *src;
	        dst++;
        	src++;
	}

	return origDest;
}
	
int main()
{
	char a[] = "abcdefghijklmnopqrstuvwxyz";
	char buf[5];

        char *ptr;
       
	/*As you can see that the strcpy() function will write the complete string in the array
         ‘buf’ but as the size of ‘buf’ is less than the size of string so the data will get 
         written past the right boundary of array ‘buff’. Now, depending on the compiler you 
         are using, chances are high that this will get unnoticed during compilation and would
         not crash during execution. The simple reason being that stack memory belongs to program
         so any buffer overflow in this memory could get unnoticed.

	So in these kind of scenarios, buffer over flow quietly corrupts the neighbouring memory 
	and if the corrupted memory is being used by the program then it can cause unexpected results.
	*/

	ptr = mystrcpy(buf,a);

        printf("destination string - %s\n",buf);
        printf("dest string ptr - %s\n",ptr);

	return 0;
}

