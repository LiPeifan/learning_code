#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item current_book, temp;
	if(std::cin >> current_book)
	{
		int cnt = 1;
		while(std::cin >> temp)
		{
			if (current_book.isbn() == temp.isbn())
			{
				++cnt;
			}
			else
			{
				std::cout << current_book.isbn() << " occurs " << cnt << " times " << std::endl;
				current_book = temp;
				cnt = 1;
			}
		}
		std::cout << current_book.isbn() <<" occurs " << cnt << " times " << std::endl;
	}
}
