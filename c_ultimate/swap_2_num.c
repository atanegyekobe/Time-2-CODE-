#include <stdio.h>

/*
* a program to swap two 
* numbers with a third variable
*/
int main(void)
{
	int num1, num2, tmp;

	printf("enter two numbers \n");
	scanf("%d %d", &num1 ,&num2);


	tmp = num1;
	num1 = num2;
	num2 = tmp;

	printf("%d\n", num2);
	printf("%d\n", num1);

return (0);
}