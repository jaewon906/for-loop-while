#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	char a;
	printf("���� �Է��� ���ڸ� �Է��ϼ���\n");
	scanf("%d %c", &n, &a);
	while (n--)
	{
		printf("%c,", a);
	}
	system("pause");
	return 0;


}