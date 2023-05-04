#include <stdio.h>
int main(void)
{
	int year;
	printf("input year: ");
	scanf("%d", &year);
	
	int isleap;
	
	isleap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	printf("year : %d ----- isleap : %d\n", year, isleap);
	return 0;
}
