#include "pch.h"
#include <iostream>

//Create a small program that asks for two numbers and outputs the sum
int main()
{
	std::cout << "Please input two numbers to add up." << std::endl;
	//Ask for first number to add
	std::cout << "First number: ";
	int x;
	std::cin >> x;

	//Ask for second number to add
	std::cout << "Second number: ";
	int y;
	std::cin >> y;

	//Show the output of the two numbers
	std::cout << "The sum of " << x << " and " << y << " is " << x + y << std::endl;
	return 0;
}