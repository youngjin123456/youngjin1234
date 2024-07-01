#include <stdio.h>
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	scanf_s("%d", &i);
	scanf_s("%d", &j);
	printf("%d + %d = %d\n", i, j, i + j);
	printf("%d - %d = %d\n", i, j, i - j);
	printf("%d * %d = %d\n", i, j, i * j);
	printf("%d / %d = %d\n", i, j, i / j);
	printf("%d ^ %d = %.0lf", i, j, pow(i, j));
	return 0;
}
//5개의 실수를 입력받아 평균과 최댓값 최솟값을 출력하는 프로그램을 작성하시오.
#include <stdio.h>
int main(void)
{
	float min = 0;
	float max = 0;
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	float e = 0;
	printf("1 번째 실수를 입력하시요. ");
	scanf_s("%f", &a);
	printf("\n2 번째 실수를 입력하시요. ");
	scanf_s("%f", &b);
	printf("\n3 번째 실수를 입력하시요. ");
	scanf_s("%f", &c);
	printf("\n4 번째 실수를 입력하시요. ");
	scanf_s("%f", &d);
	printf("\n5 번째 실수를 입력하시요. ");
	scanf_s("%f", &e);
	if (a > b && a > c && a > d && a > e)
	{
		max = a;
	}
	if (b > a && b > c && b > d && b > e)
	{
		max = b;
	}
	if (c > b && c > a && c > d && c > e)
	{
		max = c;
	}
	if (d > b && d > c && d > a && d > e)
	{
		max = d;
	}
	if (e > b && e > c && e > d && e > a)
	{
		max = e;
	}
	if (a < b && a < c && a < d && a < e)
	{
		min = a;
	}
	if (b < a && b < c && b < d && b < e)
	{
		min = b;
	}
	if (c < b && c < a && c < d && c < e)
	{
		min = c;
	}
	if (d < b && d < c && d < a && d < e)
	{
		min = d;
	}
	if (e < b && e < c && e < d && e < a)
	{
		min = e;
	}
	printf("--- 결과 ---\n");
	printf("평균은 %f입니다.\n", (a + b + c + d + e)/5);
	printf("최댓값은 %f입니다.\n", max);
	printf("최솟값은 %f입니다.\n", min);
	return 0;
}