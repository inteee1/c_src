#include <stdio.h>

int main(void)
{
	//char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char str[] = "hello";
	printf("str : %s\n", str);
	printf("str+2: %s\n", str+2);
	
	int i;
	char str2[6];
	for ( i = 0; str[i] != '\0' ; ++i) {
	str2[i] = str[i];
	}
	str2[i] = '\0';
	printf("str2 : %s\n", str2);
	
	return 0; 


}
