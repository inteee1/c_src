#include <stdio.h>
int main(void)
{
	int man, woman;
	printf("input #man: ");
	scanf("%d", &man );
	printf("input #woman: ");
	scanf("%d", &woman );
	
	double mratio, wratio;
	//mratio = 1.0 * man / ( man + woman ) *100;
	//wratio = (woman + 0.0 ) / ( man + woman ) * 100;
	mratio = (double)man / ( man + woman ) *100;
	wratio = (double)woman / ( man + woman ) * 100;
	
	printf("man ratio : %.2f%%\t woman ratio = %.2f%%\n", mratio, wratio );
	
	return 0;
}
