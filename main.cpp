// advanced programming Ass1 Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "readarray.h"
using namespace std;

int main()
{
	const int MAXSIZE = 50; //Max array size
	int num1[MAXSIZE];
	int num2[MAXSIZE];
	int num3;
	bool success;
	int numdigits;


	// request user input
	cout << "You are about to be asked to enter two intenger numbers which are upto 50 digits long \nenter these numbers when asked followed by return" << endl;
	cout << "Please enter the first positive integer number upto 50 digits long:" << endl;
	read_int_as_array(num1, MAXSIZE, success);
	cout << "Please enter the second positive integer number upto 50 digits long:" << endl;
	read_int_as_array(num2, MAXSIZE, success);

	if (success)
		cout << "Valid input" << endl;
	else
		cout << "Invalid input" << endl;

	//cout << endl << numdigits << " digits entered" << endl << endl;// sisplay number of digets entered

	//print out array1 and array 2 contents
	cout << "Array 1 Numbers" << endl;
	for (int i = 0; i < MAXSIZE; i++)
		cout << "Array entry " << i << ":    " << num1[i] << endl;
	cout << "\n\n\nArray 2 Numbers" << endl;
	for (int i = 0; i < MAXSIZE; i++)
		cout << "Array entry " << i << ":    " << num2[i] << endl;

	char junk; cin.get(junk);

		/*for (int i = 0; i < MAXSIZE; i++)
		{
			num3 = num1[i] - num2[i];
			cout << num3;
		}*/


	return 0;
}
