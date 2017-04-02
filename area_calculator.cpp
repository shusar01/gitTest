//Program: area_calculator.cpp
//Author: Steven Husar
//Online class: cs102
//Semester: Fall 2016
//Description: Finding the area of certain objects

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int request1, request2, request3;
	const double pie = 3.14159; 
	cout <<"What you like to calculate the area of?:\n" <<
	 "1. circle\n" <<
	"2. rectangle\n" <<
	"3. triangle\n" <<
	"Enter option number:\n";
	cin >> request1;
	if (request1==1)
	{
		cout <<"Enter circle radius: ";
		cin >> request2;
		cout << "The circle's area with radius " << request2 << " is: " << (pow (request2, 2) * pie) <<endl;
	}
	else if (request1==2)
	{
		cout <<"Enter rectangle length: ";	
		cin >> request2;
		cout <<"Enter rectangle width: ";	
		cin >> request3;
		cout << "The rectangle's area with length " << request2 << " and width " << request3 << " is " << (request2*request3) << endl;
	}
	else if (request1==3)
	{
		cout <<"Enter triangle base: ";	
		cin >> request2;
		cout <<"Enter triangle height: ";	
		cin >> request2;
	}
	else 
	{
		"Please choose a vaild selection.";
	}
	return 0;
}