

#include <stdio.h>

int main()
{
    
    int a = 5, b = 5, c = 5, d = 5;
    
    a = ++a + ++a;
    b = b++ + ++b;
    c = ++c + c++;
    d = d++ + d++;
    
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    
    return 0;
}

/*
O/p - 
a: 14
b: 12
c: 13
d: 11
*/
