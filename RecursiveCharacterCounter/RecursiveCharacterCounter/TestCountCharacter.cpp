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

		try
		{
			cout << "\nEnter a string: ";
			getline( cin, stringIn );

			cout << "\nEnter a character: ";
			charIn = getchar();
			cin.ignore(1000, '\n');
		}
		catch( CountCharacterException& inputException)
		{
			cout << inputException.what();
			cout << "A search string, and a character to search for, must be entered.\n"
				 << "You entered String: \"" << inputException.getStringIn() << "\" and Character: \"" << inputException.getCharIn() << "\".\n" << endl;
		}

	//do
	//{
	//	try
	//	{
	//		cout << "\nEnter a string: ";
	//		getline( cin, stringIn );

	//		cout << "\nEnter a character: ";
	//		charIn = getchar();
	//		cin.ignore(1000, '\n');
	//	}
	//	catch( CountCharacterException& inputException)
	//	{
	//		cout << inputException.what();
	//		cout << "A search string, and a character to search for, must be entered.\n"
	//			 << "You entered String: \"" << inputException.getStringIn() << "\" and Character: \"" << inputException.getCharIn() << "\".\n" << endl;
	//	}
	//} while( stringIn.empty() || charIn == '\0' || charIn == '\n' );

	result = CountCharacter::count( stringIn, charIn );

	if( result > 0 )
		cout << "\nCharacter \"" << charIn << "\" was found (" << result << ") times.\n" << endl;
	else
		cout << "\nCharacter \"" << charIn << "\" was not found.\n" << endl;

	return 0;
}
