#include <stdio.h>
#include <stdint.h>

uint32_t reverseBits(uint32_t number)
{
        uint8_t temp = 0,i;
        uint32_t ret = 0;

        for(i = 0;i < 32;i++)
        {
                temp = (number >> i)&0x1;
                ret |= (temp << (31-i));
        }

        return ret;
}

int main()
{
        uint32_t myNumber = 0xAAAAAAAA;

        printf("Number with reversed bits = %x\n",reverseBits(myNumber));

        getchar();

        return 0;
}
