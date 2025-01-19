/* C program to move all zeroes to end of array*/
/*

Logic: -
-------
1. Create a variable ‘endOfNonZero ‘to track non-zero element.
2. Traverse the given array ‘arr’ from start to end.
3. For every non-zero element arr[i], put the element at arr[i] to arr[endOfNonZero ] and increment ‘endOfNonZero ’.
4. After complete traversal, all non-zero elements have already pushed to the beginning of the array and endOfNonZero denote the end of the non zero elements.
5. Now fill zero from ‘endOfNonZero’ to the end of the array (n).

*/

#include <stdio.h>

#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])

void moveAllZeroesAtArrayEnd(int arr[], int n)
{
    int endOfNonZero = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[endOfNonZero++] = arr[i];
        }
    }
  
    for (i = endOfNonZero; i < n; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    int arr[] = {0,1,5,2,0,9,8,0,7};
    int arr_size = ARRAY_SIZE(arr);
    int i = 0;
  
    moveAllZeroesAtArrayEnd(arr, arr_size);
    for (i = 0; i < arr_size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

/*
Output: -
1 5 2 9 8 7 0 0 0 
*/
