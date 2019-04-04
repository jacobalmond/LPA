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

	/*cout << "Hello, welcome to Jake's Carpet Cleaning Service" << endl;
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
	cout << "This estimate is valid for " << estimate_expiry << " days." << endl;*/

	// Prompt the user to enter the number of small and large rooms they would like cleaned
	// Display number of small rooms
	// Display number of large rooms
	// Display price per small room
	// Display price per large room

	// Display cost: (number of small rooms * price per small room) + (number of large rooms * price per large room)
	// Display tax: combined costs * tax rate
	// Display total estimate: (combined cost) + (tax)
	// Display estimate expiration time

	cout << "Hello, welcome to Jake's Carpet Cleaning Service" << endl;
	cout << endl;

	cout << "\nHow many small rooms would you like cleaned? ";
	int number_of_small_rooms{ 0 };
	cin >> number_of_small_rooms;

	cout << "\nHow many large rooms would you like cleaned? ";
	int number_of_large_rooms{ 0 };
	cin >> number_of_large_rooms;

	const double price_per_small_room{ 25.0 };
	const double price_per_large_room{ 30.0 };
	const double sales_tax{ 0.06 };
	const int estimate_expiry{ 30 };

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << number_of_small_rooms << endl;
	cout << "Number of large rooms: " << number_of_large_rooms << endl;
	cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;

	float cost_before_tax = (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms);
	cout << "Cost: $" << cost_before_tax << endl;

	
	float tax_due = cost_before_tax * sales_tax;
	cout << "Tax:  $" << tax_due << endl;
	cout << "==============================================" << endl;
	cout << endl;
	cout << "Total estimate: $" << cost_before_tax + tax_due << endl;
	cout << "This estimate is valid for " << estimate_expiry << " days." << endl;
	cout << endl;
	cout << "==============================================" << endl;

}	



