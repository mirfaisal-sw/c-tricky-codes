
#include <stdio.h>
#include <string.h>

/* find number of digits in an integer */
int digits_in_integer(int num)
{
    int count = 0;
    
    while(num > 0)
    {
        num /= 10;
        count++;
    }
    
    return count;
}

int main()
{
    int x = 75859;
    int y = 768;
    
    printf("Num of digits in %d is: %d\n", x, digits_in_integer(x));
    printf("Num of digits in %d is: %d\n", y, digits_in_integer(y));
  
    return 0;
}

/*
Output: -
Num of digits in 75859 is: 5
Num of digits in 768 is: 3
*/
