#include <stdio.h>
#include <stdint.h>

typedef union {

        struct pgood_reg_bitfield
        {
                uint8_t ldo2_stat:1;
                uint8_t ldo1_stat:1;
                uint8_t dc3_stat:1;
                uint8_t dc2_stat:1;
                uint8_t dc1_stat:1;
                uint8_t ldo4_stat:1;
                uint8_t ldo3_stat:1;
                uint8_t reserved_bit :1;

        }pgood_reg_bits;

        uint8_t pgood_reg_byte;

}pGoodStatus_t;

int main()
{
        pGoodStatus_t powerHealth;

        powerHealth.pgood_reg_byte = 0x45;

        printf("dc3 status = %s\n",((powerHealth.pgood_reg_bits.dc3_stat) ? "pass" : "failed"));
        
        printf("ldo4 status = %s\n",((powerHealth.pgood_reg_bits.ldo4_stat) ? "pass" : "failed"));

        getchar();

        return 0;

}

