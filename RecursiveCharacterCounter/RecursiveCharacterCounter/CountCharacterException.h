/* Filename:        CountCharacterException.h
 * Last Modified:   26 February 2014
 * Author:          Todd Parker
 * Email:           todd.i.parker@maine.edu
 * Course:          CIS354 - Algorithms and Data Structures
 * 
 * CountCharacterException.h is a custom inline exception class for CountCharacter.h
 * that extends the standard invalid_argument class to make use of the what()
 * function in the exception class. It receives inputs of the user-entered
 * string and search character, as well as functions to return said fields; and throws
 * an error message as defined in the base classe's constructor (line 23)
 */
#ifndef COUNTCHARACTEREXCEPTION_H
#define COUNTCHARACTEREXCEPTION_H
#include <stdexcept>
#include <string>

using namespace std;

class CountCharacterException : public invalid_argument
{
public:
	CountCharacterException( const string& stringIn, char charIn) : invalid_argument("\nInvalid Input: ")
	{
		this->stringIn = stringIn;
		this->charIn = charIn;
	}
// Accessor method for user-entered search string
string getStringIn() const
{
	return stringIn;
} // end getString() method

// Accessor method for user-entered search character
char getCharIn() const
{
	return charIn;
} // end getCharIn() method
private:
	string stringIn;
	char charIn;
}; // end CountCharacterException class

#endif