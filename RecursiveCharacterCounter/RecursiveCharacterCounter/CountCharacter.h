#ifndef COUNTCHARACTER_H
#define COUNTCHARACTER_H
#include <string>

using namespace std;

class CountCharacter
{
public:
	int count(const string& s, char a);
	CountCharacter();
private:
	int count(const string& s, char a, int pos);
	int frequency;
	int found;
}; // end CountCharacter Class

#endif