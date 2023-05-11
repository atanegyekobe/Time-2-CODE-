#include <stdio.h>
 
 /*
 * a program to print a given
 * time in secs
 * (hrs,mins,secs)
 */


int main(void)
{	
	int hrs, mins, secs, tot_secs;
	
	printf("enter hours\n");
	scanf("%d", &hrs);

	printf("enter minutes\n");
	scanf("%d", &mins);

	printf("enter secomds\n");
	scanf("%d", &secs);

	tot_secs = hrs *3600 + mins * 60 + secs;
	
	printf("\n");

	printf("total time in seconds :%d\n", tot_secs);

return (0);
}
	
