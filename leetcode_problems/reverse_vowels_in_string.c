
/*Reverse Vowels of a String*/

Example 1:
------------
Input: s = "IceCreAm"
Output: "AceCreIm"
  
Explanation:
The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:
-----------
Input: s = "leetcode"
Output: "leotcede"

Logic: -
---------
I. Count vowels in a string.
II. Allocate vowel array.
III. Fill vowels in the vowel array
IV. Whereever vowels are found, replace that index with dummy character.
V. While walking through modified string, reverse copy vowel array into the string index where 
   dummy chars are stored.

Code: -
========
#define DUMMY_CHAR      0x40

char* reverseVowels(char* str)
{
    int i, j, k;
    int vowels_count = 0;
    char *vowel_array, *rev_vowel_array;

    /*Count vowels in a string*/
    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowels_count++;
        }
        i++;
    }

    /*Allocate vowel array*/
    vowel_array = (char *)malloc(vowels_count);

    /*Fill vowels in the vowel array*/
    i = 0;
    j = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel_array[j++] = str[i];
            str[i] = DUMMY_CHAR;
        }
        i++;
    }

    /*Replace DUMMY chars in the original string with reversed volwels*/
    i = 0;
    k = vowels_count - 1;
    while(str[i] != '\0')
    {
        if(str[i] == DUMMY_CHAR)
        {
           str[i] = vowel_array[k];    
           k--;       
        }
        i++;
    }

    return str;
}

