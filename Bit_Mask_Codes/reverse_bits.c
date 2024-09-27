
/* Reverse bits in a 32 bit integer. */
#include <stdio.h>
#include <stdint.h>

uint32_t reverse_bits(uint32_t num)
{
    uint8_t bit, i;
    uint32_t ret = 0;
    
    for(i = 0; i < 32; i++)
    {
        bit = ((num >> i) & 0x1);
     
        ret |= (bit << (31 - i));
    }
    
    return ret;
}

int main()
{
    uint32_t x = 0x77775555;
    uint32_t y = reverse_bits(x);
    
    printf("x - %x, y - %05x\n", x, y);
    
    return 0;
}

/* Output: -
  x - 77775555, y - aaaaeeee
  */
