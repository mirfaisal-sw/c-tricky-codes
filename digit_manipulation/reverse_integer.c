#include <stdio.h>
#include <string.h>

int reverse_digits(int n) 
{
    int rev_num = 0;
    
    while (n > 0) {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    
    return rev_num;
}

int main()
{
    int x = 75859;   
    printf("Reverse of integer - %d is %d\n", x, reverse_digits(x));    
    return 0;
}

/*
Output: -
Reverse of integer - 75859 is 95857
*/
