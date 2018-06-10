# include <stdio.h>

int max (int *, int);

int main (void)
{
	int num[10] = {1, 2, 3, 4, 5, 6, 17, 8, 9, 10};
	
	printf ("the biggest is %d.\n", max(num, 10));
	
	return 0;
 } 
 
 int max (int * num, int len)
 {
 	int maxnum = *num;
 	
 	for (int i = 1; i < len; i++)
 	{
 		maxnum = maxnum > *(num + i)?maxnum : *(num + i);
	 }
 	
 	return maxnum;
 }
