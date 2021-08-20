/*************************************************************
 * Question - Check 4th and 6th bit                          *
 *************************************************************/
 
  /***********************************************************
     Formula - Test nth bit- 
     (number & (1 << n)) 
	 
	 bit = ( ((number & (1 << n)) >> n) & 0x1 );
	 
	 Note - here n is 0 based indexing, i.e. lsb is 0th 
	 bit and msb is 7th bit i.e. n = 7.
   ************************************************************/

#include <stdio.h>
#include <stdint.h>

/*
   0 0 1 1   0  1  0  0 
   
   7 6 5 4   3  2  1  0
 */
  
int main()
{
    uint32_t number = 0x34;
    uint8_t  result;
    
    result = ((number & (1 << 4)) >> 4) & 0x1;   /*0x10 -> 0001 0000,  0x10 >> 4 -> 0x01, (0x10 >> 4) & 0x1 -> 1*/
    printf("4th bit - %x\n", result);
    
    result = ((number & (1 << 6)) >> 6) & 0x1;
    printf("6th bit - %x\n", result);
    
    getchar();

    return 0;
}
