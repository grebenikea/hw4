#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double two_rounds(double x1, double y1, double r1, double x2, double y2, double r2)
{
	if (distance(x1, y1, x2, y2) < (r1 + r2))
		printf("Intersect\n");
	else if (distance(x1, y1, x2, y2) == (r1 + r2))
		printf("Touch\n");
	else
		printf("Do not intersect\n");
}

int main()
{
	int x1, y1, r1, x2, y2, r2;
	scanf("%i%i%i%i%i%i", &x1, &y1, &r1, &x2, &y2, &r2);
	printf("%lf\n", two_rounds(x1, y1, r1, x2, y2, r2));
}
// почему-то выводит 0.000000 в конце(((