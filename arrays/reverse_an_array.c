
#include <stdio.h>
#include <stdint.h>

void reverse_an_array(int *ptr, int n)
{
    int i = 0, j = (n - 1);
    int temp;
    
    while(i < j)
    {
        temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
		
		i++;
		j--;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int i;    
    int n = sizeof(arr)/sizeof(arr[0]);
    
    reverse_an_array(arr, n);
    
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");    
    return 0;
}

/*
Output: -
  6 5 4 3 2 1
*/
