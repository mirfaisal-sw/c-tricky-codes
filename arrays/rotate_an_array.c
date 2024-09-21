/* Write a c program to rotate an array to right*/

#include <stdio.h>
void rotateArrayToRightOnce(int arr[], int len)
{
    int i, temp;    
    temp = arr[len - 1];    
    for(i = (len - 1); i > 0; i --)
        arr[i] = arr[i - 1];        
    arr[0] = temp;
}

int main()
{
    int i;
    int array[5] = {1, 2, 3, 4, 5};   
  
    rotateArrayToRightOnce(array, 5);    
    for(i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    return 0;
}

O/p - 
  5 1 2 3 4
