#include <stdio.h>

#define MODIFY(arr, index)\
		do {\
			arr[index] *= 5;\
			index++;\
		} while(0)

int main(int argc, char *argv[])
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int i = 0;

	while (i < 5)
		MODIFY(arr, i);

	for (i = 0; i < 5; ++i)
	{
		printf("ELEMENT %d: %d\n", i, arr[i]);
	}

	return 0;
}
