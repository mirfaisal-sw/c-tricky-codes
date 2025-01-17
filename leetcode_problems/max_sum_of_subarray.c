/* find the maximum sum of all subarrays of size K*/
/*
Example: -
Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’ consecutive elements in the array.

Input  : arr[] = {100, 200, 300, 400}, k = 2
Output : 700

Input  : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k = 4 
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23} of size 4.

Input  : arr[] = {2, 3}, k = 3
Output : Invalid
There is no subarray of size 3 as size of whole array is 2.
*/

#include <limits.h>
#include <math.h>
#include <stdio.h>

// Find maximum between two numbers.
int max(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

// Returns maximum sum in a subarray of size k.
int maxSum(int arr[], int n, int k)
{
    // Initialize result
    int max_sum = INT_MIN;

    // Consider all blocks starting with i.
    for (int i = 0; i < n - k + 1; i++) {
        int current_sum = 0;
        for (int j = 0; j < k; j++)
            current_sum = current_sum + arr[i + j];

        // Update result if required.
        max_sum = max(current_sum, max_sum);
    }

    return max_sum;
}

// Driver code
int main()
{
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d", maxSum(arr, n, k));
    return 0;
}

/*
Output: -
  24
*/
