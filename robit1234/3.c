#include <stdio.h>
int main(void)
{
	int i = 0;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf_s("%d", &i);
	if (i % 4 == 0 && i % 100 != 0)
	{
		printf("����");
	}
	else if (i % 400 == 0)
	{
		printf("����");
	}
	else
	{
		printf("������ �ƴϴ�");
	}
	return 0;
}