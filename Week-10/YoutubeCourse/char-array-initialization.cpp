#include<stdio.h>
#include<stdlib.h>

int main()
{
	char color1[10] = { 'b','l','u','e' };
	char color2[] = { 'b','l','u','e' };
	char color3[] = "biue";
	char color4[] = { 'b','l','u','e','\0' };

	printf_s("%s\t,Array size = %d\n", color1, sizeof(color1));
	printf_s("%s\t,Array size = %d\n", color2, sizeof(color2));
	printf_s("%s\t,Array size = %d\n", color3, sizeof(color3));
	printf_s("%s\t,Array size = %d\n", color4, sizeof(color4));
	system("pause");
}
