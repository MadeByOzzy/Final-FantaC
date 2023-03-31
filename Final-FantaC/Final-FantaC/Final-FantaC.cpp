// Final-FantaC.cpp : Defines the entry point for the application.
//
#include "Final-FantaC.h"



typedef struct {
	char name[255];
	int attack;
	int defense;
	int hitPoints;
	int manaPoints;
	bool isEnemy;
} Character;

void PrintCharacter(Character character)
{
	printf("%s\n", character.name);
}



void InitBarbarian(Character* barb)
{
	strcpy(barb->name, "Barbarian");
}




int main()
{
	// intro text
	printf("==================================================\n");
	printf("Welcome to Final-FantaC!\nA ghetto ripoff of old Final Fantasy battle tactics written in C.\n");
	printf("==================================================\n");


	// create the player's characters
	Character Barbarian;
	InitBarbarian(&Barbarian);
	PrintCharacter(Barbarian);



	return 0;
}
