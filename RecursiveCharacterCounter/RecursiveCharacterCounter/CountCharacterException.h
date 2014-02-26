#ifndef COUNTCHARACTEREXCEPTION_H
#define COUNTCHARACTEREXCEPTION_H
#include <stdexcept>
#include <string>

using namespace std;

class CountCharacterException : public invalid_argument
{
public:
	CountCharacterException( const string& stringIn, char charIn) : invalid_argument("Invalid Input: ")
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