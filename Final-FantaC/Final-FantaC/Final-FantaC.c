#include "Final-FantaC.h"
#include "test/RunUnitTests.h"

#define DEBUG


///
/// Start driver code
/// 

int main()
{
#ifdef DEBUG
	RunUnitTests();
#else
	// intro text
	printf("==================================================\n");
	printf("Welcome to Final-FantaC!\nA ghetto ripoff of old Final Fantasy battle tactics written in C.\n");
	printf("==================================================\n");

	// create the player's characters
	Character Barbarian;
	InitBarbarian(&Barbarian);
	Character Archer;
	InitArcher(&Archer);
	Character Cleric;
	InitCleric(&Cleric);
	Character Mage;
	InitMage(&Mage);
#endif





	return 0;
}
