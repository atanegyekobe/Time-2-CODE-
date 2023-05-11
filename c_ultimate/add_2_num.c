#include <stdio.h>

/*
 * a program to add two numbers
 * and output sum
 */

int main(void)
{
	int num1, num2, sum;

	printf("please enter two numbers\n");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("sum = %d\n", sum);

	return (0);
}
