#include "Character.h"

/*
* Function PrintCharacter
* Prints the character's name to the console window
*
* Params:
*	character - the character to print
*
* Returns:
*	void
*/
void PrintCharacter(Character character)
{
	printf("%s\n", character.name);
}

/*
* Function PrintCharacterStats
* Prints the character name and then all their stats on indented lines
*
* Params:
*	character - the character to print
*
* Returns:
*	void
*/
void PrintCharacterStats(Character character)
{
	printf("%s\n", character.name);
	printf("\tAttack:             %d\n", character.attack);
	printf("\tDefense:            %d\n", character.defense);
	printf("\tHit Points:         %d\n", character.hitPoints);
	printf("\tMana Points:        %d\n", character.manaPoints);
	printf("\tMana Recovery Rate: %d\n", character.manaRecoveryRate);
}
