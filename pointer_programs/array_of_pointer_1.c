#include <stdio.h>

int main()
{
    char *parr[] = { "Hello=1", "World=2", "Boy=3", NULL};
    char **envp;
    int i;
    
    for(i = 0; parr[i] != NULL; i++) {
        printf("msg - %s\n", parr[i]);
    }
    
    printf("\n");
    
    envp = parr;
    printf("envp - %s\n", *envp);
    printf("envp - %s\n", envp[2]);

    return 0;
}

/*Output: -

msg - Hello=1
msg - World=2
msg - Boy=3

envp - Hello=1
envp - Boy=3

*/
