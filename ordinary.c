#include <stdio.h>
int main(void)
{
	int year;
	printf("input year: ");
	scanf("%d", &year);
	
	int isord;
	//isord = !(year % 4 == 0 && year % 100 = 0) || (year % 400 == 0);
	isord = year % 4 != 0 || year % 100 == 0 && year % 400 !=0;
	
	printf("year : %d ----- isordinary : %d\n", year, isord);
	return 0;
}
