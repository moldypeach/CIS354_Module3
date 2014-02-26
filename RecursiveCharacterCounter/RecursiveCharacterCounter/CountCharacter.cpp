#include "CountCharacter.h"

CountCharacter::CountCharacter()
{
	frequency = 0;
	found = 0;
}

int CountCharacter::count(const string& s, char a)
{
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