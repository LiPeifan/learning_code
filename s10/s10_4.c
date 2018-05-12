# include <stdio.h>

int max (double *, int);

int main (void)
{
	double num[5] = {2.3, 90.3, 11.2, 321.321, 90.223};
	
	printf ("the biggest is the No.%d num.\n", max(num, 5));
	
	return 0;
}

int max (double * num, int len)
{
	int n = 0;
	double maxnum = *num;
	for (int i = 1; i < len; i++)
		n = maxnum > *(num + i)? n:i;
	
	return n;
}
