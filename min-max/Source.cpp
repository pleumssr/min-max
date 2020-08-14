#include<stdio.h>
int main()
{
	int a, min, max, i;
	scanf_s("%d", &a);
	int x[10000];
	for (i = 0; i < a; i++)
	{
		scanf_s("%d", &x[i]);
		if (i == 0)
		{
			max = x[i];
			min = x[i];
		}
		if (min > x[i])
		{
			min = x[i];
		}
		if (max < x[i])
		{
			max = x[i];
		}

	}
	printf("%d\n", min);
	printf("%d", max);
	return 0;
}