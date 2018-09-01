#include <stdio.h>

void Move(int, char, char);
void Hanoi(int, char, char, char);

int main(void)
{
	Hanoi(5, 'A', 'B', 'C');
	
	return 0;
}

void Move(int n, char A, char C)
{
	printf("编号为%d:	%c------>%c\n", n, A, C);
}

void Hanoi(int n, char A, char B, char C)
{
	if (1 == n)
	{ 
		Move(n, A, C);
	} 
	else
	{
		Hanoi(n-1, A, C, B);
		Move(n, A, C);
		Hanoi(n-1, B, A, C);
	}
}
