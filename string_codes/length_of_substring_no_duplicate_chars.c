

#include <stdio.h>
#include <string.h>

/*Find length of longest substring without repeating characters
 * Returns length of substring. 
 */
int length_of_substring_no_duplicate_chars(char *s)
{
    int count_hash[256] = {0};
    int i = 0, j = 0; /*i - start index, j - end index*/
    int ret  = 0;
    
    while( j < strlen(s))
    {
        count_hash[s[j]]++;

        while(count_hash[s[j]] > 1)
        {
            count_hash[s[i]]--;
            i++;
        }

        /*Find Max*/
        if(ret < (j-i+1))
            ret = (j-i+1); /*j - i + 1 gives length of substring*/

        j++;
    }
    
    return ret;
}

int main()
{
    char *str1 = "abcdaefghijb";
    char *str2 = "abcabcbb";
    int index = 0;
 
    printf("Length of sub-string with no repeative chars - %d\n",
                    length_of_substring_no_duplicate_chars(str1));
  
    printf("Length of sub-string with no repeative chars - %d\n",
                    length_of_substring_no_duplicate_chars(str2));
    return 0;
}

/*
Output: -

Length of sub-string with no repeative chars - 10
Length of sub-string with no repeative chars - 3

*/

