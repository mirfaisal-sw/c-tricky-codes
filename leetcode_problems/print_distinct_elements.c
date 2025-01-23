

/* C program to print all distinct elements in an array using nested loops.*/

#include <stdio.h>

int* findDistinct(int *arr, int size, int *resSize) {
    int *res = (int*)malloc(size * sizeof(int));
    *resSize = 0;
    int i, j;
  
    for (i = 0; i < size; i++) {
        /* Check if this element is included in result */
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;

        /* Include this element if not included previously. */
        if (i == j)
            res[(*resSize)++] = arr[i];
    }
    return res;
}

int main() {
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int resSize;
    
    int *res = findDistinct(arr, size, &resSize);

    for (int i = 0; i < resSize; i++)
        printf("%d ", res[i]);
    
    free(res);
    return 0;
}

/*Output: -

12 10 9 45 2

*/
