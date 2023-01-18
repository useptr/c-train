#pragma warning( disable: 4996)
#include <stdio.h>
#include <string.h>
void foo();
int main()
{
	foo();
	/*char str[128];
	scanf("%s", str);
	printf("str = %s\n", str);
	int num;
	scanf("%d", &num);
	printf("num = %d\n", num);*/
	/*printf("str length = %d\n", strlen(str));
	printf("str length = %d\n", sizeof(str)/sizeof(str[0]));*/
	return 0;
}
void foo() {
	printf("%s", "Hello n-w\n");
}