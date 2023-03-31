#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>


typedef struct {
	char name[255];
	int manaPointCost;

} Skill;



/*
* Struct Character
* Holds character stats, like attack, defense, name, etc.
*/
typedef struct {
	char name[255];
	int attack;
	int defense;
	int hitPoints;
	int manaPoints;
	int manaRecoveryRate;
	bool isEnemy;
} Character;

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
void PrintCharacter(Character character);

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
void PrintCharacterStats(Character character);
