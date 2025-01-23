
/* C program to find sexond largest element in an array*/

#include <stdio.h>

#define ARRAY_SIZE(x) (sizeof(x)/sizeof(x[0]))

int find_second_largest(int *arr, int n)
{
    int first = arr[0];
    int second = 0;
    int i;
    
    for(i = 0; i<n ; i++)
    {
        if(first < arr[i])
        {
            second = first;
            first = arr[i];
        }
        else if (second < arr[i])
        {
            second  = arr[i];            
        }
    }
    
    return second;
}

int main()
{
    int array[10] = {14, 16, 4, 2, 7, 2, 13, 17, 0, -15};   
    
    printf("Second largest element = %d\n", find_second_largest(array, ARRAY_SIZE(array)));
    
    return 0;    
}

/*Output: -
  Second largest element = 16
*/
