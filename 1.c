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
//5���� �Ǽ��� �Է¹޾� ��հ� �ִ� �ּڰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
	printf("1 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &a);
	printf("\n2 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &b);
	printf("\n3 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &c);
	printf("\n4 ��° �Ǽ��� �Է��Ͻÿ�. ");
	scanf_s("%f", &d);
	printf("\n5 ��° �Ǽ��� �Է��Ͻÿ�. ");
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
	printf("--- ��� ---\n");
	printf("����� %f�Դϴ�.\n", (a + b + c + d + e)/5);
	printf("�ִ��� %f�Դϴ�.\n", max);
	printf("�ּڰ��� %f�Դϴ�.\n", min);
	return 0;
}