#include <stdio.h>

/*
 * * a program to swap three
 * * numbers from input
 * */

int main(void)
{

		int a, b, c, tmp;
			
	printf("enter three integer nunbers\n");
	scanf("%d %d %d", &a, &b, &c);
	tmp=a;
	a=b;
	b=c;
	c=tmp;
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
return (0);
}
