#include <stdio.h>

/* a program to cal
 * the area of a circle
 */

#define PI 3.14

int main(void)
{	
	int radius;
       float area;

	printf("enter radius\n");
	scanf("%d",&radius);
	area = PI * ( radius * radius);
	printf("area of the circle is = %f\n", area);	

return (0);
}
