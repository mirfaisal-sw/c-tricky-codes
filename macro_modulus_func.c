#include <stdio.h>

#if 0
#define my_modulus(number,divisor)\ 
					do {\
                                              while((number) >= (divisor)){(number) = (number) - (divisor);}\
                                              return (number);\
                                           }while(0)
#endif

int my_modulus(int number, int divisor)
{
	while(number >= divisor)
	{
		number = number - divisor;
	}
	return number;
}  

int main()
{
    int a = my_modulus(10,3);
    printf("Modulus - %d\n",a);

    return 0;
}
