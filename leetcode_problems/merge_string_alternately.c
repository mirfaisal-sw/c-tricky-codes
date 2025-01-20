
/*Merger strings alternately.
Examples: -
============
  
Example 1:
---------
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"

Example 2:
----------
Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"

Example 3:
-----------
Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
*/

Code: -
=======
char * mergeAlternately(char * word1, char * word2)
{
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    char *temp = (char *)malloc(len1 + len2 + 1);
    int i = 0, j = 0, k = 0;
    do 
    {
        if(word1[j] != '\0')
            temp[i++] = word1[j++];
      
        if(word2[k] != '\0')
            temp[i++] = word2[k++];        

    }while( i < (len1 + len2));
    
    temp[i] = '\0';
    return temp;
}
