#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	char a;
	printf("숫자 입력후 문자를 입력하세요\n");
	scanf("%d %c", &n, &a);
	while (n--)
	{
		printf("%c,", a);
	}
	system("pause");
	return 0;


}