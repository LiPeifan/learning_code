#include <stdio.h>

void large_of (double *, double *);

int main (void)
{
	double x, y;
	printf ("请输入两个数：\n");
	scanf ("%lf %lf", &x, &y);
	large_of (&x, &y);
	printf ("现在x为%lf, y为%lf.\n", x, y);

	return 0;
}

void large_of (double * ptrx, double * ptry)
{
	if (*ptrx > *ptry)
		*ptry = *ptrx;
	else
		*ptrx = *ptry;
}
