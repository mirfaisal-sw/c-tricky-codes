
#include <stdio.h>

int main() {
    // Using char *ptr[]
    char *arrayOfStrings[] = {"Hello", "World", "XYZ"};
    
    // Accessing elements
    for (int i = 0; i < 3; i++) {
        printf("%s\n", arrayOfStrings[i]);
    }
    
    printf("\n");
    
    // Using char **ptr
    char **ptr;
    int n = 3;
    
    // Dynamically allocate memory for 3 pointers
    ptr = malloc(n * sizeof(char*));
    
    // Assigning values
    ptr[0] = "Hello";
    ptr[1] = "World";
    ptr[2] = "XYZ";
    
    // Accessing elements
    for (int i = 0; i < n; i++) {
        printf("%s\n", ptr[i]);
    }

    // Free allocated memory (only if allocated with malloc)
    free(ptr);
    
    return 0;
}

/*Output: -
  Hello
  World
  XYZ

  Hello
  World
  XYZ
*/
