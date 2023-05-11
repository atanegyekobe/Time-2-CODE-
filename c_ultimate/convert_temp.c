#include <stdio.h>

/*
 * a program to calc temperature 
 * in farhrenheit
 */

int main(void)
{
	float temp, centi;

	printf("enter tmeperature in fahrenheit\n");
	scanf("%f", &temp);

	centi = (temp - 32) * 5/9;
	
	printf("%f Fahrenheit\n", centi);

return (0);

}
