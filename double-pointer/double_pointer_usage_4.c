
#include<stdio.h>

void function(char **ptr)
{
	char *ptr1;
  	ptr += sizeof(int);
	ptr1 = ptr[-2];
	printf("%s\n", ptr1);
}

int main()
{
	char *arr[] = { "ant", "bat", "cat", "dog", "egg", "fly" };
	function(arr);
	return 0;
}

Output: - cat
-------

Explanation: - 
---------------
sizeof(int) = 4
ptr = ptr + 4, will point to "egg".
Hence, ptr[-2] will point to "cat".
  
  
