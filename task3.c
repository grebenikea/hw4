#include <stdio.h>

float yearfrac(int year, int day)
{
	float result;
	if ((year % 4) == 0)
		result = day / 366.0;

	else
		result = day / 365.0;

	return result;
}

int main()
{
	int year, day;
	scanf("%i%i", &year, &day);
	printf("%f", yearfrac(year, day));
}