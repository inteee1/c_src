#include <stdio.h>
void printStrs(char *Arr[], int size)
{
	
	for ( int i = 0; i < size ; ++i)
	{
	
	printf("%s\t", Arr[i]);
	}
	printf("\n");
}
int main(void)
{
	char *cities[] = { "Seoul", "Los Angeles", "Paris", "Moscow", "London" };
	printStrs(cities, 5);
	
	return 0;
}
