#include <stdio.h>

/*
*program to calc average of 
*numbers
*/

int main(void)
{
	int num1, num2;
	float avrge;

		printf("enter two number\n");
		scanf("%d %d", &num1, &num2);
	avrge = (num1 + num2) / 2;

		printf("Average is :%f\n", avrge);

	return (0);
}
