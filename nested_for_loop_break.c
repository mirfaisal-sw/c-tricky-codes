#include <stdio.h>

int main()
{
    int i, j;
    
    for(i = 0; i<5; i++)
    {
        printf("i = %d\n", i);
        for(j = 0; j<5; j++)
        {
            if(j == 3)
            {
                break;
            }
            
            printf("    j = %d\n", j);
        }
        printf("Here\n\n");
    }
    
    
    printf("Out of both loops\n");

    return 0;
}

/* 
Output: -

  i = 0
    j = 0
    j = 1
    j = 2
Here

i = 1
    j = 0
    j = 1
    j = 2
Here

i = 2
    j = 0
    j = 1
    j = 2
Here

i = 3
    j = 0
    j = 1
    j = 2
Here

i = 4
    j = 0
    j = 1
    j = 2
Here

Out of both loops
*/
