# include <stdio.h>

void add (int *, int *, int *, int);

int main (void)
{
	int num1[5] = {1, 2, 3, 4, 5};
	int num2[5] = {2, 3, 4, 5, 6};
	int sum[5];
	
	add (num1, num2, sum, 5);
	
	for (int i = 0; i < 5; i++)
		printf ("sum[%d] = %d\n", i, sum[i]);
	
	return 0;
 } 
 
 void add (int * num1, int * num2, int * sum, int len)
 {
 	for (int i = 0; i < len; i++)
 		*(sum + i) = *(num1 + i) + *(num2 +i);
 }
