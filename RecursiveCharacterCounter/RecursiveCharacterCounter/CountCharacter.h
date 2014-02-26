#ifndef COUNTCHARACTER_H
#define COUNTCHARACTER_H
#include "CountCharacterException.h"
#include <string>

using namespace std;

class CountCharacter
{
public:
	static int count(const string& s, char a);
private:
	static int frequency;
	static int found;
	static bool valid;
	static bool validateInput(const string& s, char a);
	static int count(const string& s, char a, int pos);
}; // end CountCharacter Class

#endif