/***********************************************************
 *Guess output of below program.
 ***********************************************************/

#include <stdio.h>

double g_a, g_b;

int main() 
{
    int a = 30;
    int b = 5;
        
    int *p = &a, *q = &b;
       
    printf("%d\n", p - q);
    printf("%d\n", (char*)p - (char*)q);
    printf("%d\n", (char*)&a - (char*)&b);
    
    double *p_ga, *p_gb;
    p_ga = &g_a;
    p_gb = &g_b;
    printf("%d\n", p_ga - p_gb);
    printf("%d\n", (char*)p_ga - (char*)p_gb);

    char x[10];
    double y[10];
    printf("%d\n",&x[3]-&x[2]);
    printf("%d\n",&y[3]-&y[2]);
        
    return 0;
}

/***************************************
 Output: -
    1
    4
    4
    1
    8
    1
    1 
 ***************************************/

/*************************************************
 *Explanation: -                                 
 * 1) If we take array of type char, int or double,
 *    then difference in pointer between two consecutive
 *    elements will always be 1;
 * 
 * Ex:- char a[10];
 *      double b[10];
 * 
 *      printf("%d\n",&a[3]-&a[2]);
 *      printf("%d\n",&b[3]-&b[2]);
 * 
 *      O/p - 1
 *            1
 * 2) Raw answer - 
 *    Difference between two pointers of same data type is 1.
 * 
 * 3) Pointer arithmetic:-
 *    Pointer arithmetic and comparision in C is supported by 
 *    following operators:-
 *    ++,--,+,-,<,>,<=,>=,==,!=
 *    Increment operator on pointer returns next address pointed 
 *    by the pointer. The next address returned is sum of current
 *    pointer address and size of pointer data type.
 * 
 *    If a double pointer "dptr" is pointing at 0x1230, after dptr++
 *    , it will point at 0x1238.
 *    
 **********************************************************************/
