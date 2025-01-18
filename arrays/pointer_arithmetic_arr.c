
/*Find output of below program.*/

#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    ++*arr;
    printf("%u", *arr);
    return 0;
}

/*
Output: -
  2
*/

Logic: 
-------
  ++*arr  ==> associativity of ++ and * operator is from Right-to-Left.
  *arr -> arr[0]
  ++*arr -> ++arr[0]

  
