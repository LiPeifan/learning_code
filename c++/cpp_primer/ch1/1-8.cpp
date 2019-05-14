#include <iostream>
int main()
{
	//std::cout << "*/";
	//	*/
	//	--------------------------------
	//	Process exited after 0.1483 seconds with return value 0
	//std::cout << "*/";
	//	*/
	//	--------------------------------
	//	Process exited after 0.1632 seconds with return value 0
	//std::cout << /* "*/" */;
	//	[Error] missing terminating " character
	std::cout << /* "*/" /* "/*" */;
	//	/*
	//	--------------------------------
	//	Process exited after 0.1618 seconds with return value 0
	return 0;
}
