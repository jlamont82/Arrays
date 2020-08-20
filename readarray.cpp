#include "readarray.h"

// function read_int_as_array of upto 50 digits
// 
// parameter input: array to hold the digits of the integer
// parameter size: the size of the array
// parameter numdigits: the number of digits of the integer read in
// parameter success: indicates that integer was read successfully,
// or otherwise.
//
//
// This function reads an integer of up to "size" digits
// and stores the digits in the array "input".
//


void read_int_as_array(int input[], int size, bool& success)

{
	char temp;
	int i;
	success = true;
	if (size < 1) return;

	int count = 0;

	// initialise array entries to 0

	for (i = 0; i < size; i++)
		input[i] = 0;

	do
		// loop through input characters
	{
		// get character
		cin.get(temp);
		// if we have not reached end of line or got too many digits
		// place digit into array, converted to int
		if ((temp != '\n') && (count < size))
			input[count] = int(temp) - int('0');
		// if the character was not a digit, make success false
		if ((!isdigit(temp)) && (temp != '\n'))
			success = false;

		// increase counter
		count++;
	} while (temp != '\n');



	return;


}