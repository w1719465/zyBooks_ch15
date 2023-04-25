#include <iostream>
using namespace std;

#include "critter.h"

/**
   A nervous critter moves back and forth between positions 0 and 1.
*/

//class NervousCritter :: public Critter /* Your code goes here */
class NervousCritter : public Critter
{
public:
	/* Your code goes here */
	void act();
};

/* Your code goes here */
void NervousCritter::act()
{
	Critter::act();
	int pos = Critter::get_position();
	if (pos > 0) { pos = -1; }
	else { pos = 1; }
	Critter::move(pos); //??
}

int main_Citter()
{
	NervousCritter critter1;
	critter1.act();
	cout << critter1.get_history() << endl;
	cout << "Expected: [move to 1]" << endl;
	critter1.act();
	cout << critter1.get_history() << endl;
	cout << "Expected: [move to 1, move to 0]" << endl;
	critter1.act();
	cout << critter1.get_history() << endl;
	cout << "Expected: [move to 1, move to 0, move to 1]" << endl;
	critter1.act();
	cout << critter1.get_history() << endl;
	cout << "Expected: [move to 1, move to 0, move to 1, move to 0]" << endl;

	return 0;
}