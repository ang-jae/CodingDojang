#include <stdio.h>
#include <math.h>

void main()
{
	double x, y, diagonal;
	printf("x = ");
	scanf_s("%f",&x);
	printf("y = ");
	scanf_s("%f", &y);

	diagonal = sqrt(x*x + y * y);
	printf("diagonal = %f", diagonal);
}