
#include <stdio.h>

int main()
{
    int row = 0, col = 0;
    
    char arr[3][4] = { 
                        {1,2,3,4},
                        {5,6,7,8},
                        {9,10,11,12}
                    };
                    
    char (*ptr)[4];
    
    
    
    printf("%p %p %p\n", arr, arr+1, arr+2); /*points to ith row.*/
    printf("%p %p %p\n", *arr, *(arr + 1), *(arr + 2)); /*it is equivalent to arr[i], which points to base address of ith row*/
    printf("%d %d %d\n", **arr, *(*(arr + 1) + 2), *(*(arr + 2) + 3)); //  *(*(arr+i) + j) is same as arr[i][j]. */ 
    printf("%d %d %d\n\n", arr[0][0], arr[1][2], arr[2][3]);
    
    ptr = arr;
    printf("%p %p %p\n", ptr, ptr + 1, ptr + 2);
    printf("%p %p %p\n", *ptr, *(ptr + 1), *(ptr + 2));
    printf("%d %d %d\n", **ptr, *(*(ptr + 1) + 2), *(*(ptr + 2) + 3));
    printf("%d %d %d\n\n", ptr[0][0], ptr[1][2], ptr[2][3]);
    
    return 0;
}


/*Output: -
  
0x7ffda133671c 0x7ffda1336720 0x7ffda1336724
0x7ffda133671c 0x7ffda1336720 0x7ffda1336724
1 7 12
1 7 12

0x7ffda133671c 0x7ffda1336720 0x7ffda1336724
0x7ffda133671c 0x7ffda1336720 0x7ffda1336724
1 7 12
1 7 12

*/
