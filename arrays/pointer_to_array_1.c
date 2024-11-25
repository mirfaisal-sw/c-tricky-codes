

#include <stdio.h>
#include <stdint.h>

int main()
{
    int i;
    int arr[] = {1,2,3,4,5};
    int (*ptr)[5];
    
    ptr = &arr;
    
    printf("Sizeof(ptr) - %ld\n", sizeof(ptr));
    printf("Sizeof(*ptr) - %ld\n", sizeof(*ptr));
    
    return 0;
}

/*Output: -
Sizeof(ptr) - 8
Sizeof(*ptr) - 20
*/
