#include "Final-FantaC.h"


///
/// Start driver code
/// 

int main()
{
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



	return 0;
}
