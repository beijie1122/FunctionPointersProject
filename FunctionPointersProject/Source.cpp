#include <iostream>

int c = 10;

int d = 2;

int Multiply(int a, int b)
{
	return a * b;
}

int Multiply2()
{
	return c * d;
}

void print(int (*funcptr)())
{
	std::cout << "The Value of the Product is: " << funcptr() << "\n";
}

int main()
{

	int (*func)(int, int);

	func = Multiply;

	int prod = func(15, 2);

	std::cout << "The Value of the Product is " << prod << "\n";

	print(Multiply2);

	return 0;
}