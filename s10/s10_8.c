# include <stdio.h>

void copy_arr (double (*num) [5], int len1, int len2, double copy_num[len1][len2]);
void output (double (*num) [5], int len1, int len2, double copy_num[len1][len2]);

int main (void)
{
	double num[3][5] = {
		{1.1, 2.2, 3.3, 4.4, 5.5},
		{1.2, 2.3, 3.4, 4.5, 5.6},
		{2.1, 3.2, 4.3, 5.4, 6.5}
	};
	double copy_num[3][5];
	
	copy_arr (num, 3, 5, copy_num);
	output (num, 3, 5, copy_num);
	
	return 0;
}

void copy_arr (double (*num) [5], int len1, int len2, double copy_num[len1][len2])
{
	for (int i = 0; i < len1; i++)
		for (int j = 0; j < len2; j++)	
				copy_num[i][j] = *(*(num+i) + j);
}

void output (double (*num) [5], int len1, int len2, double copy_num[len1][len2])
{
	for (int i = 0; i < len1; i++)
		for (int j = 0; j < len2; j++)
		{
			printf ("num[%d][%d] = %lf\n", i, j, num[i][j]);
			printf ("copy_num[%d][%d] = %lf\n", i, j, copy_num[i][j]);
		}
}
