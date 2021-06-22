#include <stdio.h>
#include <stdint.h>

#define NO_OF_BITS_IN_BYTE      8

uint8_t findOnesComplement(uint8_t number)
{
    uint8_t temp,result = 0;
        
    for(uint8_t uc_loop = 0; uc_loop < NO_OF_BITS_IN_BYTE; uc_loop++)
    {
        
        temp = ( (~(number&1)) & 1);
        result |= (temp << uc_loop);
       
        number >>= 1;
    }
    
    return result;
}

int main() 
{
    uint8_t x;
    
    printf("Enter the number : -\n");
    scanf("%d",&x);
    
    printf("Input = %d, Output = %d\n",x,findOnesComplement(x));
    
    getchar();
    
    return 0;
}
