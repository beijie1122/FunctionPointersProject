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

void HelloWorld()
{
	std::cout << "Hello World!" << "\n";
}

void HelloWorldParam(int a)
{
	std::cout << "Hello World! Value: "<< a << "\n";
}

void print(int (*funcptr)())
{
	std::cout << "The Value of the Product is: " << funcptr() << "\n";
}

int main()
{
	//DONT USE () for assigning to a function, this is equal to &HelloWorld, as a reference 
	auto function = HelloWorld;

	function();

	//This is the actual type, second set of () are inputs 
	void(*function2)();

	int (*func)(int, int);

	//TypeDef -- if we ant to use it, we just type in HellowWorldFunction and then the function3

	typedef void(*HellowWorldFunction)();

	HellowWorldFunction function3 = HelloWorld;

	function3();

	//Include the parameters here
	typedef void(*NewHelloWorldFunction)(int );

	NewHelloWorldFunction Function4 = HelloWorldParam;

	Function4(4);


	func = Multiply;

	int prod = func(15, 2);

	std::cout << "The Value of the Product is " << prod << "\n";

	print(Multiply2);

	return 0;
}