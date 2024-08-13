

#include <stdio.h>

/* In an integer, passed as first argument, clear bits from
 * "Bit position = bit_low" to "Bit position = bit_high" and
 * then set value equal to argument - 2 i.e. val.
 */ 
void my_func(int *ptr, char val, char bit_high, char bit_low)
{
	char mask = 0;
	int i = 0;
	
	/*Generate bit mask*/
	for (i = 0; i <= (bit_high - bit_low); i++)
	{
	    mask |= (1 << (bit_high - i));
	}
	
	/*Clear gropu of bits ranging from bit_low to bit_high.*/
	*ptr &= ~mask;
	
	/*Set the value to these bits using value = arg2 i.e. val*/
	*ptr |= (val << bit_low);
}
	
int main()
{
    
    int a = 0, *ptr;
    ptr = &a;
    
    my_func(ptr, 4, 11, 8);
    
    printf("value - %x", a);
    
    return 0;
}

=======================
Output: - 
value - 400

  
