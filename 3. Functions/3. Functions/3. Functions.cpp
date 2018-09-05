// Testing out how functions work in C++. 

#include "pch.h"
#include <iostream>

int getValue()
{
	std::cout << "Enter an integer: ";
	int a;
	std::cin >> a;
	return a;
}

void difference()
{
	std::cout << "And the difference is: " << std::endl;
}

int main()
{
	int x = getValue();
	int y = getValue();

	std::cout << x << " + " << y << " = " << x + y << std::endl;
	difference();
	std::cout << x - y << std::endl;

	return 0;
}