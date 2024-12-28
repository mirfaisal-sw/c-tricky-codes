

#include <stdio.h>
#include <string.h>

/* try to find the given pattern in the search string */
int search_pattern_in_string(char *search, char *pattern, int slen, int plen)
{
    int i = 0, j = 0, k = 0;

    for (i = 0; i <= (slen - plen); i++)
    {
        for (j = i, k = 0; (search[j] == pattern[k]) &&
                        (k < plen); j++, k++);
        if (k == plen)
            return i;
    }
    
    return -1;
}

int main()
{
    char input_string[] = "abczefbykeut";
    char key_string[] = "fby";
    
    int res = 0;
    
    res = search_pattern_in_string(input_string, key_string,
                    strlen(input_string), strlen(key_string));
    
    if (res == -1) {
        printf("Search pattern is not available\n");
    } else {
        printf("Search pattern available at the location %d\n", res);
    }
    
    return 0;
}

/*
Output: -
  Search pattern available at the location 5
*/
