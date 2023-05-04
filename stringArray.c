#include <stdio.h>

void printStringArray1(char (*pArr)[20], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", &pArr[i][0]); //pArr[i]
		}
}

void printStringArray2(char **pArr, int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", pArr[i]); //&pArr[i][0]
		}
}






int main(void)
{
	char cities1[][20] = {"seoul", "Los Angeles", "Paris", "Rio de janeiro", "Moscow"};
	char *cities2[] = {"seoul", "Los Angeles", "Paris", "Rio de janeiro", "Moscow"};
	printStringArray1(cities1, 5);
	printStringArray2(cities2, 5);
	return 0;
}

