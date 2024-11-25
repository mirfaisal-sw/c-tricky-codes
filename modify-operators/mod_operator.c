
#include <stdio.h>

int main()
{
    int n, a = 100;    
    n = a++;    
   
    printf("n = %d\n", n);
    printf("a = %d\n", a);
  
    return 0;
}

/*Output: -
n = 100
a = 101
*/
