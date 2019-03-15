// Section4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

int main() 
{
	int favourite_number;

	std::cout << "Enter your favourite number between 1 and 100: ";

	std::cin >> favourite_number;

	std::cout << "Amazing! That's my favourite number too!" << std::endl;

	return 0;
}


