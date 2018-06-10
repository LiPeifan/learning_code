# include <stdio.h>

void copy_arr (double (*) [4], double (*) [4], int, int);

int main (void)
{
	double num[4][4] = {
		{1.1, 2.2, 3.3, 4.4},
		{1.2, 2.3, 3.4, 4.5},
		{1.3, 2.4, 3.5, 4.6},
		{2.1, 3.2, 4.3, 5.4}
	};
	
	double cpynum[4][4];

	copy_arr (num, cpynum, 4, 4);
	
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			{
				printf ("num[%d][%d] = %lf\n", i, j, num[i][j]);
				printf ("cpynum[%d][%d] = %lf\n", i, j, cpynum[i][j]);
			}		
	return 0;
}

void copy_arr (double (* num) [4], double (* cpynum) [4], int len1, int len2)
{
	for (int i = 0; i < len1; i++)
		for (int j = 0; j < len2; j++)
			*(*(cpynum+j)+i) = *(*(num+j)+i);
}
