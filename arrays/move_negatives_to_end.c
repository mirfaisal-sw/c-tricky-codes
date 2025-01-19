
/* Move negative elements to end of array*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])

void move_all_negative_array_elements_to_end(int arr[], int n)
{
    int temp[n];
    
    int i = 0; /*track index of input array*/
    int j = 0; /*track index of temp array*/
    
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0 )
        {
            temp[j++] = arr[i];
        }
    }
    
    if(j == 0 || j == n)
        return;
        
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[j++] = arr[i];
        }
    }
    
    memcpy(arr, temp, sizeof(temp));
}

int main()
{
    int array[] = {0, -1, -2, 2, 5, 7, 6, -7, 8};
    int i;
    int len = ARRAY_SIZE(array);
    
    move_all_negative_array_elements_to_end(array, len);
    
    for (i = 0; i < ARRAY_SIZE(array); i++)
    {
        printf("%d, ", array[i]);
    }
    
    return 0;
}

/*Output: -
0, 2, 5, 7, 6, 8, -1, -2, -7
*/
