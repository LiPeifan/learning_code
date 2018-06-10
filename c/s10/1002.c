#include <stdio.h>
void copy_arr (double *, double *, int);
void copy_prr (double *, double *, int);
int main (void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	copy_arr (source, target1, 5);
	copy_prr (source, target2, 5);
	
	for (int i = 0; i < 5; i++)
		printf ("target1[%d] = %.1f\n", i, target1[i]);
	printf ("\n\n");
	for (int i = 0; i < 5; i++)
		printf ("target2[%d] = %.1f\n", i, target2[i]);

	return 0;
}

void copy_arr (double * source, double * target1, int len)
{
	int i;
	for (i = 0; i < len; i++)
		target1[i] = source[i];
}

void copy_prr (double * source, double * target2, int len)
{
	int i;
	for (i = 0; i < len; i++)
		*(target2 + i) = *(source + i);
}
