

/* C program to allocate a 2D array*/

#include <stdio.h>
#include <stdlib.h>

void *allocate_2D_array(int row, int column)
{
    int i, j;
    int (*ptr)[column] = malloc(row*column*sizeof(int));
    
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            ptr[i][j] = i*j;
        }
    }
    
    return ptr;
}

int main()
{
    int r = 4, c = 5;
    int i, j;
    
    int (*p2darr)[c] = allocate_2D_array(r, c);
    
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%d ", p2darr[i][j]);
        }
        
        printf("\n");
    }
    
    return 0;
}

/*
Output: -
0 0 0 0 0 
0 1 2 3 4 
0 2 4 6 8 
0 3 6 9 12
*/
