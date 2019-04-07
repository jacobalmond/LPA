// Section_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	/*int test_scores[5]{ 100, 99, 98, 97, 96 };

	cout << "Score at array index 0 = " << test_scores[0] << endl;
	cout << "Score at array index 1 = " << test_scores[1] << endl;
	cout << "Score at array index 2 = " << test_scores[2] << endl;
	cout << "Score at array index 3 = " << test_scores[3] << endl;
	cout << "Score at array index 4 = " << test_scores[4] << endl;*/

	/*char vowels[]{ 'a', 'e', 'i', 'o', 'u' };
	cout << "The first vowel is " << vowels[0] << endl;
	cout << "The last vowel is " << vowels[4] << endl;*/

	double hi_temps[]{ 90.1, 89.7, 91.2, 88.4 };

	cout << "The first high temperature is " << hi_temps[0]  << endl;

	hi_temps[0] = 92.0;

	cout << "The first high temperature is now " << hi_temps[0] << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
