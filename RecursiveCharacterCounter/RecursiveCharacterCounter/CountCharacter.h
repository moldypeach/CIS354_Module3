/* Filename:        CountCharacter.h
 * Last Modified:   26 February 2014
 * Author:          Todd Parker
 * Email:           todd.i.parker@maine.edu
 * Course:          CIS354 - Algorithms and Data Structures
 * 
 * CountCharacter.h defines the static methods implemented in CountCharacter.cpp,
 * which, includes two fields for tracking found search characters (frequency) and
 * the current position of the search character (found), a recursive method count
 * that is overloaded to find said search character, and a method for validating that
 * that a user entered data (validateInput) that calls upon an exception handler
 */
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
	static int frequency; // Track number of search character occurances
	static int found; // Store current position of character search matches
	static bool valid; // Stores whether a match was found
	static bool validateInput(const string& s, char a); // Determine if required inputs are present
	static int count(const string& s, char a, int pos); // Recursive helper function
}; // end CountCharacter Class

#endif