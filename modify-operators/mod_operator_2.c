
#include <stdio.h>

int main()
{
    int i = 5, j = 5, k = 5, l = 5;
    int a, b, c, d;
    
    a = ++i + ++i + ++i;
    b = ++j + ++j;
    c = k++ + k++;
    d = l++ + l++ + l++;
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    
    return 0;
}

/*Output: -

a = 22
b = 14
c = 11
d = 18

*/
