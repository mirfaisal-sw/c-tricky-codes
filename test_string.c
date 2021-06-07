#include <stdio.h>
#include <string.h>

//char buf[100];
int main()
{
	char buf[100];
	unsigned char pin_no;

        memset(buf,0,100);
        printf("strlen buf - %d\n",strlen(buf));

	pin_no = 10;	
	sprintf(buf,"/sys/class/gpio/gpio%d",pin_no);
        printf("strlen buf - %d\n",strlen(buf));

	buf[5] = 0;
        printf("strlen buf - %d\n",strlen(buf));

        printf("Decimal value of null char '\0' - %d\n",'\0');
	return 0;
}
