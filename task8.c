#include <stdio.h>

const double eps = 1e-10;

double f(double x)
{
	double f;
	f = x * x * x * x * x + 2 * x * x * x * x + 5 * x * x + 4 * x - 500;
	return f;
}

int main()
{
	double l = 1;
	double h = 5;
	while ((h - l) > eps)
	{
		if (f((h + l) / 2) >= 0)
			h = (h + l) / 2;
		else
			l = (h + l) / 2;
	}
	printf("%lf", (h + l) / 2);
}
