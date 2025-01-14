


#include <stdio.h>

typedef struct stud {
    char a;
    int b;
    int c;
    char d;
}stud_t;

int main()
{
    int *p;
    double *q;
    struct stud x;
    
    printf("sizeof char - %d\n", sizeof(char));
    printf("sizeof int - %d\n", sizeof(int));
    printf("sizeof double - %d\n\n", sizeof(double));
    
    printf("sizeof char* - %d\n", sizeof(char* ));
    printf("sizeof int* - %d\n", sizeof(int* ));
    printf("sizeof double* - %d\n", sizeof(double* ));

    printf("size of stud_t - %d\n", sizeof(stud_t ));
    printf("size of stud_t * - %d\n", sizeof(stud_t *));
    
    return 0;
}

/**
  
Output: -
sizeof char - 1
sizeof int - 4
sizeof double - 8

sizeof char* - 8
sizeof int* - 8
sizeof double* - 8
size of stud_t - 16
size of stud_t * - 8

**/
