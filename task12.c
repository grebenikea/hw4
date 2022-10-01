#include <stdio.h>
#include <math.h>

const double eps = 1e-10;

double solve_quadratic(double a, double b, double c)
{
	double D = b * b - 4.0 * c *a;
	if (D > eps)
	{
		double px1 = (sqrt(D) - b) / (2.0 * a);
		double px2 = (- sqrt(D) - b) / (2.0 * a);
		printf("2 : %lf and %lf", px1, px2);
	}
	else if (D == 0)
	{
		double px1 = (- b / 2.0 / a);
		printf("1: %lf", px1);
	}
	else
	{
		return 0.0;
	}
} 

double main()
{
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("%lf", solve_quadratic(a, b, c));
}