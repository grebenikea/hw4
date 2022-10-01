#include <stdio.h>
#include <math.h>

long double pi(int n)
{
	long double result = 0.0;
	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 == 0)
		{
			result -= (1.0 / ((2 * i) - 1));
		}
		else
		{
			result += (1.0 / ((2 * i) -1 ));
		}
	}
	return result;
}

int main()
{
	int n;
	scanf("%i", &n);
	printf("%Lf", pi(n) * 4);
}