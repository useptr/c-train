#pragma warning( disable: 4996)
#include <stdio.h>
#include <string.h>
int main()
{
	char str[128];
	scanf("%s", str);
	printf("str = %s\n", str);
	int num;
	scanf("%d", &num);
	printf("num = %d\n", num);
	/*printf("str length = %d\n", strlen(str));
	printf("str length = %d\n", sizeof(str)/sizeof(str[0]));*/
	return 0;
}