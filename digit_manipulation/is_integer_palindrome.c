

#include <stdio.h>
#include <string.h>

int reverse_digits(int n) 
{
    long long int rev_num = 0;
    
    while (n > 0) {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    
    return rev_num;
}

int is_palindrome(int x)
{
    if(x < 0)
        return 0;
        
    if(x == reverse_digits(x))
        return 1;
    else
        return 0;
}

int main()
{
    int x = 75859, y = 1221;
   
    printf("Is integer %d palindrome - %s\n", x, is_palindrome(x) ? "Yes" : "No");
    printf("Is integer %d palindrome - %s\n", y, is_palindrome(y) ? "Yes" : "No");
    
    return 0;
}

/*Output: -
Is integer 75859 palindrome - No
Is integer 1221 palindrome - Yes
*/
