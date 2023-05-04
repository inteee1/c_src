#include <stdio.h>
int strlin(const char* str)
{	
	int i = 0;
	while (*str != '\0')
	{
	++str;
	++i;
	}
	return i;

}
int main(void) 
{
	char* sentence = "hello world";
	printf("%d\n", strlin(sentence));
	return 0;
}
