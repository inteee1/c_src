#include <stdio.h>
#define Bold (0x01 << 0)
#define Italic (0x01 << 1)
#define Shadow (0x01 << 2)
#define Ul (0x01 << 3)
int main(void)
{
	/*int isBold, isItalic, isShadow, isUl;
	char isBold, isItalic, isShadow, isUl;
	
	isBold = 1;
	isItalic = 1;
	isShadow = 1;
	isUl = 1;
	*/
	unsigned char attr;
	attr = attr ^ attr;
	attr = attr | Bold;
	attr = attr | (Italic + Shadow);
	attr = attr & ~Bold;
	printf("attr : 0x%02x\n", attr);
	
	return 0;
}
