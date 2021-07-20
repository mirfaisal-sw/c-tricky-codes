#include <stdio.h>
#include <stdint.h>



uint8_t swapNibble(uint8_t number)
{
    number = ( ((number & 0xF0) >> 4) | ((number & 0x0F) << 4) );
    return number;
}

uint32_t swapNibbleOf32BitNumber(uint32_t number)
{
    uint8_t i;
    uint8_t temp;
    for(i = 0; i < sizeof(number);i++)
    {
        temp = ((number) >> (8*i)) & 0xff; /*Extract 8 bits */
        temp = ( ((temp & 0xF0) >> 4) | ((temp & 0x0F) << 4) ) ;/*swap nibble*/
        number &=  ~(0xFF << 8*i); /*Nullify the extracted byte*/
        number |= (temp << 8*i);   /*OR with the swapped nibble*/
    }

    return number;
}

int main()
{
    uint8_t number = 0x47;

    printf("Input number - 0x%x\n",number);
    printf("swapped nibble - 0x%x\n",swapNibble(number));

    uint32_t num = 0x47474747;
    printf("Input 32 bit number - 0x%x\n",num);
    printf("swapped nibble 32 bit - 0x%x\n",swapNibbleOf32BitNumber(num));
    return 0;
}
