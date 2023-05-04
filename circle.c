#include <stdio.h>
#define PI 3.14152

int main(void)
{
	double R;  //radius
	printf("input radius : ");
	scanf("%lf", &R);	

	double A;
	A = R * R * PI;
	
	printf("area = %.5f\n", A);



	return 0;
	
}
