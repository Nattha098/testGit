#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int age[5];
	for(int i = 0; i < 5; i = i++)
	{
		age[i] = i + 1;
		printf("age %d : %d \n", age[i], i+2);
	}
	
	return 0;
}
