
#include <stdio.h>
#include <stdint.h>

int main()
{
    int i;
    char arr[5][10] = {"Mir", "Ashaz", "Noorin"};
    
    for(i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i]);
        printf("%s\n", arr + i);
        printf("%s\n", *(arr + i) + 1);
        printf("/n");
    }
    return 0;
}

/*Output: -
Mir
Mir
ir

Ashaz
Ashaz
shaz

Noorin
Noorin
oorin
*/
