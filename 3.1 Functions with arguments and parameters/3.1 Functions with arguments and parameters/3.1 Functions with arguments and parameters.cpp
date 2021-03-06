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
 
	std::cout << "Addition: " << add(w, z) << std::endl; 
	std::cout << "Multiplication: " << multiply(w, z) << std::endl; 
	std::cout << "Division: " << divide(w, z) << std::endl; 
	std::cout << "Subtraction: " << subtract(w, z) << std::endl; 

	return 0; 
}