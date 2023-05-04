#include <stdio.h>

int sumArray(const int *pArr, int size) // *pArr = *pArr[]=*Arr[5]
{
	int sum = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum + pArr[i]; // *(pArr+i)
	}
	return sum;
}


int main(void)
{
	int nums[] = {1, 2, 3, 4, 5};
	
	int sum;
	sum = sumArray(nums, 5); // sum = sumArray(&nums[0])
	printf("sum : %d\n", sum);
	return 0;

}
