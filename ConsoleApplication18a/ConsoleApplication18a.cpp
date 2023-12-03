#include <iostream>
int main()
{
	int x;
	int y;
	std::cin >> x >> y;
	if(x==0 && y==0)
	{
		std::cout << 0;
	}
	if(x!=0 && y==0 )
	{
		std::cout << 1;
	}
	if(x==0 && y!=0)
	{ {std::cout << 2; }
	}
	if(x!=0 && y!=0)
	{
		std::cout << 3;
	}
	return 0;
}