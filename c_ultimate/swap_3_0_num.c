#include <stdio.h>

/*
* a program to swap three 
* numbers without the 
* third variable
*/

int main(void)
{

	int a , b , c;

	printf("enter three numbers\n");
	scanf("%d %d %d", &a, &b, &c);

	// Swap a, b, and c without using a fourth variable

    a = a + b + c; //a = 6 + 4 + 2 now a = 12
    b = a - b - c; // b = 12 - 4 - 2 now b = 6
    c = a - b - c; // c = 12 - 6 - 2 now c = 4
    a = a - b - c; // a = 12 - 6 - 4 now a = 2


	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);

return (0);
}
	
