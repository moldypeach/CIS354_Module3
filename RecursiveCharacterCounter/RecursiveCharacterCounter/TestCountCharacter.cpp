/* Filename:        TestCountCharacter.cpp
 * Last Modified:   26 February 2014
 * Author:          Todd Parker
 * Email:           todd.i.parker@maine.edu
 * Course:          CIS354 - Algorithms and Data Structures
 * 
 * TestCountCharacter.cpp is a test-harness programm for CountCharacter.h. It prints a
 * header from SignatureBlock.h, and creates a simple menu inteface to allow a user to 
 * test implementation of the character counting functionality provided by
 * CountCharacter.h
 */
#include "CountCharacter.h"
#include "SignatureBlock.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string stringIn;
	char charIn;
	int result;

	SignatureBlock::printHeader(); // Print Signature Block
	CountCharacter count;

	cout << "Enter a string: ";
	getline( cin, stringIn );

	cout << "Enter a character: ";
	cin >> charIn;

	result = count.count( stringIn, charIn );

	if( result > 0 )
		cout << "\nCharacter \"" << charIn << "\" was found (" << result << ") times.\n" << endl;
	else
		cout << "\nCharacter \"" << charIn << "\" was not found.\n" << endl;

	return 0;
}
