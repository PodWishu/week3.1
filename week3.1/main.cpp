#include <stdio.h>

int main()
{
	int a, b, c, max, mid, sum;
	printf("num1 = ");
	scanf_s("%d", &a);
	printf("num2 = ");
	scanf_s("%d", &b);
	printf("num3 = ");
	scanf_s("%d", &c);
	if (a > b && a > c)
	{
		max = a;
		if (b > c)
		{
			mid = b;
			sum = max + mid;
			printf("%d", sum);
		}
		if (c > b)
		{
			mid = c;
			sum = max + mid;
			printf("%d", sum);
		}
	}
	if (b > a && b > c)
	{
		max = b;
		if (a > c)
		{
			mid = a;
			sum = max + mid;
			printf("%d", sum);
		}
		if (c > a)
		{
			mid = c;
			sum = max + mid;
			printf("%d", sum);
		}
	}
	if (c > a && c > b)
	{
		max = c;
		if (a > b)
		{
			mid = a;
			sum = max + mid;
			printf("%d", sum);
		}
		if (b > a)
		{
			mid = b;
			sum = max + mid;
			printf("%d", sum);
		}
	}
	return 0;
}