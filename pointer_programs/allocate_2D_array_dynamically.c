
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row = 3, column = 4;
    int (*ptr)[column];
    int i, j, k = 100;
    
    ptr = (int (*)[column])malloc(row * column * sizeof(int));
    
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            *(*(ptr + i) + j) = k;
            k++;
        }
    }
    
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d ", ptr[i][j]);
        }
        
        printf("\n");
    }
    return 0;
}

/* Output: -

100 101 102 103 
104 105 106 107 
108 109 110 111 

*/
