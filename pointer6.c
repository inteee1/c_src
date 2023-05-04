#include <stdio.h>
int main(void)
{
	int i = 100;
	double d = 3.14;
	void *p;
	p = &i;
	
	*(int *)p = 200;
	
	p = &d;
	*(double *)p = 2.718;
	
	printf("i : %d\n", i);
	printf("d : %f\n", d);
	
	return 0;
}
