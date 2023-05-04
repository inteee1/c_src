#include <stdio.h>

int main(void)
{
	//int num = 100;
	int nums[10] = {50, 30, 100, 10, 20, 90, 80, 40, 60, 70}; //initialization list
	
	int sum = 0;
	for( int i = 0; i < 10; ++i) {
		sum += nums[i];  //sum = sum + nums[i];
		}
	
	printf("sum = %d\n", sum); 
	
	
	/*for (int i = 0; i < 10; ++i)
		if (num[i]<50){
		sum +=num[i];
		}*/
	return 0;
}
