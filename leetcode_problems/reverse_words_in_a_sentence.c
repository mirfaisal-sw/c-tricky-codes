
/**
 * C program to reverse order of words in a string
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 100 // Maximum string size

char* reverseWords(char* str) 
{
    
    int len; 
    int word_start, word_end;
    
    len = strlen(str);
    word_start = word_end = len - 1;

    char *reversed_str = (char *)malloc(len + 1);
    int index = 0, i;
    
    printf("strlen - %d\n", len);

    while(word_start > 0)
    {
        if(str[word_start] == ' ')
        {
            i = word_start + 1;
            
            while(i <= word_end)
            {
                reversed_str[index++] = str[i++];
            }

            word_end = word_start - 1;
            reversed_str[index++] = ' ';
        }
      
        word_start--;
    }

    /*Finally add the last word*/
    for(i=0; i <= word_end; i++)
        reversed_str[index++] = str[i];
   
    /*Add NULL character at the end of reverse string*/
    reversed_str[index] = '\0';

    return reversed_str;
}

int main()
{
    char str[100], *reverse;
    int len, i, index, wordStart, wordEnd;

    printf("Enter any string: ");
    gets(str);

    reverse = reverseWords(str);
    
    printf("Original string: -\n%s\n\n", str);
    printf("Reverse ordered words: - \n%s", reverse);

    return 0;
}

/*
Output: -

Original string: - 
I am Mir Faisal

Reverse ordered words: -
Faisal Mir am I

*/
