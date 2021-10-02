#include <iostream>


class Functor
{
public:
	Functor()
	{
	}

	int operator()(int a, int b)
	{
		return a + b;
	}
};

int main()
{
	Functor f;
	
	std::cout << f(1, 2);
}
