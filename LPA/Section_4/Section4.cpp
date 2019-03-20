// Section4.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

//using namespace std;

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	int favourite_number;
	cout << "Enter your favourite number between 1 and 100: ";
	cin >> favourite_number;
	cout << "Amazing! That's my favourite number too!" << std::endl;
	cout << "No, really, " << favourite_number << " is my favourite number too!" << std::endl;;
	return 0;
}


