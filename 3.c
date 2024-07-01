#include <stdio.h>
int main(void)
{
	int i = 0;
	printf("년도를 입력하세요 : ");
	scanf_s("%d", &i);
	if (i % 4 == 0 && i % 100 != 0)
	{
		printf("윤년");
	}
	else if (i % 400 == 0)
	{
		printf("윤년");
	}
	else
	{
		printf("윤년이 아니다");
	}
	return 0;
}