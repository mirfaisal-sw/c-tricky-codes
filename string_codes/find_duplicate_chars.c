

/*Find whether an string is having any duplicate characters*/

#include <stdio.h>
#include <string.h>

#define TRUE   1   
#define FALSE  0

/*Find an string having no duplicate characters*/
int is_string_having_duplicate_characters(char *str)
{
    int i, j;
    int ret = FALSE;
    
    for(i = 0; i < strlen(str); i++)
    {
        for(j = i+1; j < strlen(str); j++)
        {
            if(str[i] == str[j])
            {
                ret = TRUE;
                break;
            }
        }
        
        if(ret == TRUE)
            break;
    }    
    return ret;
}

int main()
{
    char *str1 = "abcdefghijb";
    char *str2 = "daptic";
 
    printf(" String has repeative chars? - %s\n",
                    is_string_having_duplicate_characters(str1) ? "YES" : "NO" );
                    
    printf(" String has repeative chars? - %s\n",
                    is_string_having_duplicate_characters(str2) ? "YES" : "NO" );
    return 0;
}

/* Output: -

 String has repeative chars? - YES
 String has repeative chars? - NO

*/
