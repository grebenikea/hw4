#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double length(double x, double y)
{
	return distance(x, y, 0, 0);
}

double scalar_product(double x1, double y1, double x2, double y2)
{
	return x1 * x2 + y1 * y2;
}

const double pi = 3.14159265359;

double to_degrees(double rad)
{
	return rad * 180 / pi;
}

double angle(double x1, double y1, double x2, double y2)
{
	double result, result_1, rad;
	result_1 = scalar_product(x1, y1, x2, y2) / length(x1, y1) / length(x2, y2);
	rad = acos(result_1);
	result = to_degrees(rad);
	return result;
}

int main()
{
	int x1, y1, x2, y2;
	scanf("%i%i%i%i", &x1, &y1, &x2, &y2);
	printf("%lf", angle(x1, y1, x2, y2));
}