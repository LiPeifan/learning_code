# include <stdio.h>

void copy_arr (double *, double *, int, int);

int main (void)
{
	double num[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	
	double three_five[3];
	
	copy_arr(num, three_five, 3, 5);
	
	for (int i = 0; i < 7; i++)
		printf ("num[%d] = %lf\n", i, num[i]);
	for (int j = 0; j < 3; j++)
		printf ("three_five[%d] = %lf\n", j, three_five[j]);
	
	return 0;
}

void copy_arr (double * num, double * three_five, int len1, int len2)
{
	int j = 0;
	for (int i = (len1 - 1); i < len2; i++, j++)
		*(three_five + j) = *(num + i);
}
