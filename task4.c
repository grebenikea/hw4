#include <stdio.h>
#include <math.h>

unsigned long long fact(int n)
{
	unsigned long long result = 1;
	for (int i = 1; i <= n; ++i)
		result *= i;
	return result;
}

long double volume(int n)
{
	long double result = 0.0;
	if ((n % 2) == 0)
	{
		result = fact(n/2) * pow(2, n) / pow (M_PI, n/2);
	}

	else
	{
		result = fact(n) / fact ((n - 1) / 2) / pow(M_PI, (n-1) / 2);
	}

	return result;
}

int main()
{
	int n;
	scanf("%i", &n);
	printf("%Lf\n", volume(n));
} 