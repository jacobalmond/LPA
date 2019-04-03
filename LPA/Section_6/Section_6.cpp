// Section_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <climits>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	/*cout << "Enter the width of the room: ";
	int room_width{ 0 };
	cin >> room_width;

	cout << "Enter the length of the room: ";
	int room_length{ 0 };
	cin >> room_length;

	cout << "The area of the room is " << room_width * room_length << " square feet" << endl;

	return 0;*/

	/*string name;
	cin >> name;
	int age;
	cin >> age;
	double hourly_wage{23.50};

	cout << name << " " << age << " " << hourly_wage;*/

	/*long long people_on_earth{ 7'600'000'000 };
	cout << "long long: " << sizeof(long long) << "bytes." << endl;
	cout << "people on earth size: " << sizeof(people_on_earth) << "bytes." << endl;

	const double pi{ 3.1415926 };*/

	// Prompt the user to enter the number of rooms
	// Display number of rooms
	// Display price per room

	// Display cost: (number of rooms * price per room)
	// Display tax: number of rooms * price per room * tax rate
	// Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
	// Display estimate expiration time

	cout << "Hello, welcome to Jake's Carpet Cleaning Service" << endl;
	cout << endl;
	cout << "\nHow many rooms would you like cleaned? ";

	int number_of_rooms{ 0 };
	cin >> number_of_rooms;

	const double price_per_room{ 30.0 };
	const double sales_tax{ 0.06 };
	const int estimate_expiry{ 30 };

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of rooms: " << number_of_rooms << endl;
	cout << "Price per room: $" << price_per_room << endl;
	cout << "Cost: $" << price_per_room * number_of_rooms << endl;
	cout << "Tax:  $" << price_per_room * number_of_rooms * sales_tax << endl;
	cout << "==============================================" << endl;
	cout << "Total estimate: $" << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * sales_tax) << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days." << endl;

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

