#include <iostream>
int main()
{
	int i = 10;
	while (i >= 0)
	{
		std::cout << i << std::endl;
		--i;
	}
	
	return 0;
}
/*
10
9
8
7
6
5
4
3
2
1
0

--------------------------------
Process exited after 0.03194 seconds with return value 0
*/
