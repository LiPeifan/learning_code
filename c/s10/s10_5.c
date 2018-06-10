# include <stdio.h>

double max_sub_min (double *, int);

int main (void)
{	
	double num[5] = {2.3, 90.3, 11.2, 321.321, 90.223};
		
	printf ("最大数与最小数的差为：%lf.\n", max_sub_min(num, 5));
	
	return 0;
}

double max_sub_min (double * num, int len)
{
	double max, min;
	
	max = min = *num;
	
	for (int i = 1; i < len; i++)
	{
		max = max > *(num + i)?max:*(num + i);
		min = min < *(num + i)?min:*(num + i);
			//printf ("%lf %lf\n", max, min);
	}
	//printf ("%lf %lf\n", max, min);
	return (max - min);
}
