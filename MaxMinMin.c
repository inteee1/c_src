#include <stdio.h>
int main(void)
{	int a, b, c;
	printf("input 3 number : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b && a > c && b > c) {
		printf("%d is max, %d is mid, %d is min\n", a, b, c);
	} else if (a > b && a > c && c > b) {
		printf("%d is max, %d is mid, %d is min\n", a, c, b);
	} else if (b > a && b > c && a > c) {
		printf("%d is max, %d is mid, %d is min\n", b, a, c);
	} else if (b > a && b > c && c > a) {
		printf("%d is max, %d is mid, %d is min\n", b, c, a);
	} else if (c > a && c > b && a > b) {
		printf("%d is max, %d is mid, %d is min\n", c, a, b);
	} else {
		printf("%d is max, %d is mid, %d is min\n", c, b, a);
	}
	/*
	if (a > b) {
		if (c > a) {	
		printf("%d is max, %d is mid, %d is min\n", c, a, b);
	} else if (c > b) {
		printf("%d is max, %d is mid, %d is min\n", a, c, b);
	} else {
		printf("%d is max, %d is mid, %d is min\n", a, b, c);
	}
	} else {
		if (c > b) {
		printf("%d is max, %d is mid, %d is min\n", c, b, a);
	} else if (c > a) {
		printf("%d is max, %d is mid, %d is min\n", b, c, a);
	} else {
		printf("%d is max, %d is mid, %d is min\n", b, a, c);
	} 	
*/






	return 0;
}
