#include <stdio.h>
int main(void)
{	
	int year;
	printf("input year : ");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) {
	//if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0 ) {
		printf("%d is leap year\n", year);
		// leap year
	} else {
		printf("%d is ordinary year\n", year);
		// ordinary year
		}
	return 0;
}
