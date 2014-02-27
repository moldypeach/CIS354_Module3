/* Filename:        TestCountCharacter.cpp
 * Last Modified:   26 February 2014
 * Author:          Todd Parker
 * Email:           todd.i.parker@maine.edu
 * Course:          CIS354 - Algorithms and Data Structures
 * 
 * TestCountCharacter.cpp is a test-harness programm for CountCharacter.h. It prints a
 * header from SignatureBlock.h, and two brief prompts to allow a user to 
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
	string stringIn; // User-entered string
	char charIn; // User-entered search character
	int result; // Stores whether character match was found

	SignatureBlock::printHeader(); // Print Signature Block

	// Prompt user for input until valid data is recieved for both fields
	do
	{
		// Get a string and search character from user
		try
		{
			cout << "\nEnter a string: ";
			getline( cin, stringIn );

			cout << "\nEnter a character: ";
			// Using getchar() instead of "cin >> charIn", to allow for user to NOT enter a search
			// character, and thus allow exception handling to be tested
			charIn = getchar();
			// Discard any remaining characters in the input stream
			cin.ignore(1000, '\n');

			// Call static method count with user-entered string and search character
			result = CountCharacter::count( stringIn, charIn );
		}
		catch( CountCharacterException& inputException)
		{
			cout << inputException.what();
			cout << "\n\nA search string, and a character to search for, must be entered.\n"
				 << "You entered String: \"" << inputException.getStringIn() << "\" and Character: \"";
			if( inputException.getCharIn() == '\n' )
				cout << "\\n";
			else
				cout << inputException.getCharIn();
			cout << "\".\n" << endl;
		}
	} while( stringIn.empty() || ( charIn == '\0' || charIn == '\n' ) );

	// If a character match was found
	if( result > 0 )
		cout << "\nCharacter \"" << charIn << "\" was found (" << result << ") times.\n" << endl;
	// No character match was found
	else 
		cout << "\nCharacter \"" << charIn << "\" was not found.\n" << endl;

	getchar();

	return 0;
} // end main
