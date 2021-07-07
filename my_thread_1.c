/******************************************************************************
Interview Question - Thales India July 2021
Question -  Write a program to create two threads to print even number in one 
thread and odd number in other thread.
*******************************************************************************/
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void *t_even(void *arg);
void *t_odd(void *arg);

void *t_even(void *arg)
{
    int num = *(int *)arg;
    
    for(int i = 0;i<10;i++)
    {
        if(i%2 == 0)
        printf("even no - %d\n",i);
    }
    
    return NULL;
}

void *t_odd(void *arg)
{
    int num = *(int *)arg;
    
    for(int i = 0;i<10;i++)
    {
        if(i%2 != 0)
        printf("odd no - %d\n",i);
    }
    
    return NULL;
}

int main()
{
    int res;
    int *ret_status;

    pthread_t thread1;
    pthread_t thread2;
    int arg = 10;
    
    pthread_create(&thread1,NULL,t_even,&arg);
    pthread_create(&thread2,NULL,t_odd,&arg);
    
    pthread_join(&thread1, ret_status);
    pthread_join(&thread2, ret_status);
    
    getchar();

    return 0;
}
