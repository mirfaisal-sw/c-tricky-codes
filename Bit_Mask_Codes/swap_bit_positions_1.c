

#include <stdio.h>
#include <stdint.h>

uint32_t reverse_num(uint32_t num)
{
    int i;
    uint32_t ret = 0;
    
    for(i = 0; i < 32; i++)
    {
        ret |= ((num >> i) & 0x1) << (31-i);
    }
    
    return ret;
}

/*Method - 1*/
uint32_t swap_two_bits(uint32_t num, uint8_t index1, uint8_t index2)
{
    uint8_t bit1 = (num >> index1) & 0x1;
    uint8_t bit2 = (num >> index2) & 0x1;
    
    /*Clear bit positions*/
    num &= ~(1 << index1);
    num &= ~(1 << index2);
   
    /*swap bit positions using swapped indices*/
    num |= (bit1 << index2);
    num |= (bit2 << index1);
    
    return num;
}

/*Method - 2*/
uint32_t swap_two_bits1(uint32_t num, uint8_t index1, uint8_t index2)
{
    uint32_t ret;
    uint8_t c;
    
    uint8_t bit1 = (num >> index1) & 0x1;
    uint8_t bit2 = (num >> index2) & 0x1;
    
    c = bit1 ^ bit2;
    c = (c << index1) | (c << index2);
    
    ret = num ^ c;
    
    return ret;
}

int main()
{
    uint32_t n = 0x00aa55aa;
    
    uint32_t num = 0x08;
    uint32_t num1 = 0x04;
    
    printf("Reversed number = %x\n", reverse_num(n));
    
    printf("Swapped number = %x\n", swap_two_bits(num, 2, 3));
    printf("Swapped number 1 = %x\n", swap_two_bits(num1, 1, 2));
    
    return 0;
}

/*Output: -
Reversed number = 55aa5500
Swapped number = 4
Swapped number 1 = 2

*/
