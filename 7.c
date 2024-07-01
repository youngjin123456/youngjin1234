#include <stdio.h>
#include <math.h>
int main()
{
	int o = 0; //순열
	int qhr = 1; // 중복순열
	int wh = 0; // 조합
	int t = 1;
	int tn1 = 1;
	int tr = 1;
	int j = 1;
	int oi = 1;
	int n = 0;
	int r = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &r);
	for (int i = (n - r);i > 0;i--)
	{
		j = j * i;
	}
	for (int k = n;k > 0;k--)
	{
		t = t * k;
	}
	for (int k = r;k > 0;k--)
	{
		tr = tr * k;
	}
	o = t / j;
	printf("%d\n", o); // 순열 출력
	for (int wnd = 0;wnd < r;wnd++) // wnd = 중복순열
	{
		qhr = qhr * n;
	}
	wh = t / (j * tr);
	printf("%d\n", qhr);
	printf("%d\n", wh);
	for (int k = n - 1;k > 0;k--)
	{
		tn1 = tn1 * k;
	}
	for (int nr1 = (n + r - 1);nr1 > 0;nr1--)
	{
		oi = oi * nr1;
	}
	printf("%d", oi / (tn1 * tr));
}