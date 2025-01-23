
/* Single Numbers: -
 -------------------
Given a non-empty array of integers nums, every element appears twice except for one.
Find that single one.

You must implement a solution with a linear runtime complexity and use only constant
extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1

Example 2:

Input: nums = [4,1,2,1,2]
Output: 4

Example 3:

Input: nums = [1]
Output: 1
*/

/***********
Code: -
************/

#include <stdio.h>

int findSingle(int ar[], int n)
{
    /*Do XOR of all elements and return*/
    int res = ar[0];
    for (int i = 1; i < n; i++)
        res = res ^ ar[i];
    return res;
}

int main()
{
    int ar[] = { 2, 3, 5, 4, 5, 3, 4 };
    int n = sizeof(ar) / sizeof(ar[0]);
    printf("%d", findSingle(ar, n));
    return 0;
}

/* 
Output: -
2
*/
