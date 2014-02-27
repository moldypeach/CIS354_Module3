/* Filename:        CountCharacter.cpp
 * Last Modified:   26 February 2014
 * Author:          Todd Parker
 * Email:           todd.i.parker@maine.edu
 * Course:          CIS354 - Algorithms and Data Structures
 * 
 * CountCharacter.cpp is the implementation of CountCharacter.h
 */
#include "CountCharacter.h"

	int CountCharacter::frequency = 0;
	int CountCharacter::found = 0;
	bool CountCharacter::valid = false;

int CountCharacter::count(const string& s, char a)
{
	if( !validateInput( s, a ) )
		throw CountCharacterException( s, a );
	else
		count( s, a, 0 );
	return frequency;
} // end recursive count function

int CountCharacter::count(const string& s, char a, int pos)
{
	found = s.find_first_of( a, pos );

	if(found != std::string::npos)
	{
		frequency++;
		count( s, a , found + 1);
	}
	else
	{
		return frequency;
	}
} // end count helper function

bool CountCharacter::validateInput(const string& s, char a)
{
	if( (!s.empty()) && (a != '\0') && (a != '\n'))
	{
		valid = true;
	}

	return valid;
} // end validateInput() method