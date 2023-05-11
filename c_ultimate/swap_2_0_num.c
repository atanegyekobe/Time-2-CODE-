#include <stdio.h>

/*
 * a program to swap 
 * two given numbers 
 * from input
 */

int main(void)
{
	int a, b;

	printf("enter two numbers\n");
	scanf("%d %d", &a, &b);

	a = a + b;
	b = a - b;
	a = a - b;

	printf("%d\n", a);
	printf("%d\n", b);

return (0);
}
