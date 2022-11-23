#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct node {
    
        char str[100];
        struct node *next;
};

void allocNode(struct node **ptr)
{
        *ptr = (struct node *)malloc(sizeof(struct node*));
}

struct node *allocNodeOtherWay()
{
        struct node *ptr;

        ptr = (struct node *)malloc(sizeof(struct node*));

        return ptr;
}

void useData(struct node *ptr, char *string)
{
        strcpy(ptr->str, string);
}    

int main()
{

        struct node *p; 
        struct node *q; 

        allocNode(&p);
        q = allocNodeOtherWay();

        useData(p, "Hello ");
        useData(q, "World \n");

        printf("String - %s\n", p->str);
        printf("String - %s\n", q->str);

        return 0;
}

Output: -
----------
$ ./double_pointer_3
String - Hello 
String - World
