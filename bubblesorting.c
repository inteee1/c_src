#include <stdio.h>

int main(void)
{
	int nums[10] = {50, 30, 100, 10, 20, 90, 80, 40, 60, 70}; //initialization list
	for (int i = 9; i >= 1; --i) {
		for(int j = 0 ; j < i; ++j) {
			if (nums[j] > nums[j+1]) {
				int temp = nums[j];
				nums[j] = nums[j+1];
				nums[j+1] = temp;
				}
			}
		}
	
	
	for (int i = 0; i < 10 ; ++i) {
		printf("%d ", nums[i]);
		}
	printf("\n");
	return 0;
}
