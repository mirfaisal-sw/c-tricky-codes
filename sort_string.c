#include <stdio.h>
#include <string.h>

char *arr[] = {"ABC","AEF","AZA","ZBA","XACD","ZAEF"};

int main()
{
    int n = sizeof(arr)/sizeof(arr[0]);
    
    /*For understanding, each address of string literal is of 64 bits or 8 bytes*/
    printf("size of array - %d\n",n);
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr[0]));
    printf("%d\n",sizeof(*arr[0]));
    
    char *temp;
    
    for(int i = 0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(arr[i],arr[j]) > 0 )
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    
    printf("Sorted strings be : -\n");
    for(int i = 0;i<n;i++)
    {
        printf("%s, ",arr[i]);
    }
    
    return 0;
}

/**************************************************
* Output - ABC, AEF, AZA, XACD, ZAEF, ZBA
**************************************************
