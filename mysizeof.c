/****************************************************************************************
 *Question: - Implement your own sizeof function.					*
 ****************************************************************************************/

/****************************************************************************************
* This program uses the concept of poiner arithmetic i.e. for ex. let ptr be pointer to *
* to an integer and say ptr is holding the address 0x100, then ptr + 1 = 0x104          *
*****************************************************************************************/

#include <stdio.h>
#define MY_SIZEOF(x)	((void *)(&x + 1) - (void *)(&x)) 

int main()
{
	double ddata;
	float fdata;
	long long lldata;
	long ldata;
	int idata;
	short int sdata;
	char cdata;
	
	printf("address &ddata - %u\n",&ddata);

	printf("address (&ddata+1) - %u\n",(&ddata+1));	
	printf("address ((char*)&ddata+1) - %u\n",((char*)&ddata+1));	
	
	printf("Size of ddata - %d\n",MY_SIZEOF(ddata));
	printf("Size of fdata - %d\n",MY_SIZEOF(fdata));
	printf("Size of lldata - %d\n",MY_SIZEOF(lldata));
	printf("Size of ldata - %d\n",MY_SIZEOF(ldata));
	printf("Size of idata - %d\n",MY_SIZEOF(idata));
	printf("Size of sdata - %d\n",MY_SIZEOF(sdata));
	printf("Size of cdata - %d\n",MY_SIZEOF(cdata));

	return 0;    
}
