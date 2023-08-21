
#include <stdio.h>
int main()
{
    /*Here "arr" represents pointer to pointer.*/
    char *arr[] = {"cat", "mouse", "rat", "egg", "dog"};
    char **ptr;
    
    ptr = arr;
    
    printf("%s %s\n", *(arr+1), *(arr+2));
    printf("%s %s\n", *(ptr+1), *(ptr+2));
    return 0;
}

Output: - 
  mouse rat
  mouse rat
