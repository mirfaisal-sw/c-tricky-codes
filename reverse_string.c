
/************************************************************************************
 * Question - Program to reverse a string without using any other memory location.
 ************************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

/*Reverse a string without using any other memory location*/
char *reverseString(char *buf)
{
	int str_len = strlen(buf);
	char *dyn_buf = malloc(str_len + 1);

	for(uint8_t i = 0;i<(str_len/2);i++){
	
		buf[str_len - i - 1] = buf[str_len - i -1] + buf[i];
		buf[i] = buf[str_len - i - 1] - buf[i];
	        buf[str_len - i - 1] -= buf[i];		

	}

	memcpy(dyn_buf,buf,str_len);

	//out_buf = dyn_buf;

	return dyn_buf;
}

/*Reverse two character variables without using any third variable*/
int reverseTwoChars(char *a, char *b)
{
       *a = *a + *b;
       *b = *a - *b;
       *a = *a - *b;
}

int main()
{
	char buf[100] = "helloworld";
	char *str;
	
	printf("Input string - %s\n",buf);
	str = reverseString(buf);
	printf("Output string - %s\n", str);
	
	char a = 'H';
	char b = 'o';
	printf("Before swapping, a - %c, b- %c\n", a,b);
	reverseTwoChars(&a,&b);
	printf("After swapping a - %c, b - %c\n",a,b);

	getchar();
	return 0;
}
