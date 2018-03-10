#include <stdio.h>

double min (double, double);

int main (void)
{
	double x, y;

	printf ("please enter two numbers:(q to quit)\n");
	while (scanf ("%lf %lf", &x, &y) == 2){
		printf ("%lf is tne miner in %lf and %lf.\n", min (x, y), x, y);
	}

	return 0;
}

double min (double x, double y)
{
	return (x > y) ? y : x;
}
