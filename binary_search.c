#include <stdio.h>

int A[] = {11,10,5,32,9,6,5,43,2,76};

/*
 * l - lowest index, h - high index
 */
int binarySearch(int l, int h, int key)
{
    int mid;
    
    while(l <= h)
    {
        mid = (l + h)/2;
    
        if(key == A[mid])
            return mid;
        else if (key < A[mid])
            h = A[mid - 1];
        else
            l = A[mid + 1];
    }
    
    return -1;
}

int main()
{
    printf("Index of key 43 is - %d\n",binarySearch(0, 9, 43));
    return 0;
}

/*************************************
Output - 
Index of key 43 is - 7
**************************************/
