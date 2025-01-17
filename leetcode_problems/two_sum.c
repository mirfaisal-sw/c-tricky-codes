/*Two Sum: Find indices of array, whose sum equals to the target.
Ex: arr[] = {1, 2, 6, 4, 7, 0};
    Target = 9
    arr[1] + arr[4] = 9
    Return values: index - 1, 4
*/

#include <stdio.h>
#include <stdlib.h>

int *two_sum(int arr[], int arr_size, int target)
{
    int i, j;
    int *indices = NULL;
    
    for (i = 0; i < arr_size - 1; i++) 
    {
        for(j = i+1; j < arr_size; j++)
        {
            if((arr[i] + arr[j]) == target)
            {
                indices = (int *)malloc(2*sizeof(int));
                indices[0] = i;
                indices[1] = j;
                
                return indices;
            }
            
        }
    }

    return NULL;
}

// Driver code
int main()
{
    int array[20] = { 1, 4, 2, 10, 2, 3, -1, 0, 20 };
    int target = 9;
    
    int *index = two_sum(array, 9, target);
    
    if(index)
    {
        printf("indices are: %d, %d\n", index[0], index[1]);
    }
    else
    {
        printf("No matching indices found\n");
    }
    
    return 0;
}

/*Output: -
  indices are: 3, 6
  */
