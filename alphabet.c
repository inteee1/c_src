#include <stdio.h>
int main(void)
{
	//int code;
	//printf("input code : ");
	//scanf("%d", &code);
	char ch;
	printf("input char : ");
	scanf("%c", &ch);
	
	int isAlpha;
	//isAlpha = code >= 'A' && code <= 'Z';
	//isAlpha = ch >= 'A' && ch <= 'Z';
	isAlpha = (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
	
	//printf("asc code : %d ------ isAlpha : %d\n", code, isAlpha);
	printf("char : %c ------ isAlpha : %d\n", ch, isAlpha);
	
	return 0;
}
