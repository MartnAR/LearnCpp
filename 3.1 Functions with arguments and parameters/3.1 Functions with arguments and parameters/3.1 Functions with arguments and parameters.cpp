// 3.1 Functions with arguments and parameters.cpp
// Now that I've learnt how to work with functions, time to learn about argument and parameters.

#include "pch.h"
#include <iostream>

void object()
{
	std::cout << "Insert two numbers to add, multiply, divide, and subtract" << std::endl; 
}

//This function has two integer parameters, one x, and one y. The caller will supply both values.
int add(int x, int y)
{
	return x + y; 
}

int multiply(int x, int y)
{
	return x * y; 
}

int divide(int x, int y)
{
	return x / y; 
}

int subtract(int x, int y)
{
	return x - y; 
}

int getValue()
{
	std::cout << "Enter an integer: "; 
	int a; 
	std::cin >> a; 
	return a; 
}

int main()
{
	object(); 
	
	int w = getValue(); 
	int z = getValue(); 
 
	std::cout << "The sum of both integers is: " << add(w, z) << std::endl; 
	std::cout << "Multiplied, you get: " << multiply(w, z) << std::endl; 
	std::cout << "When divided, the answer is: " << divide(w, z) << std::endl; 
	std::cout << "The difference would be: " << subtract(w, z) << std::endl; 

	return 0; 
}