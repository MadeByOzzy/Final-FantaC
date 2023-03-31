#include "Final-FantaC.h"



typedef struct {
	char name[255];
	int attack;
	int defense;
	int hitPoints;
	int manaPoints;
	int manaRecoveryRate;
	bool isEnemy;
} Character;

void PrintCharacter(Character character)
{
	printf("%s\n", character.name);
}

void PrintCharacterStats(Character character)
{
	printf("%s\n", character.name);
	printf("\tAttack:             %d\n", character.attack);
	printf("\tDefense:            %d\n", character.defense);
	printf("\tHit Points:         %d\n", character.hitPoints);
	printf("\tMana Points:        %d\n", character.manaPoints);
	printf("\tMana Recovery Rate: %d\n", character.manaRecoveryRate);
}



void InitBarbarian(Character* barb)
{
	strcpy_s(barb->name, sizeof barb->name, "Barbarian");
	barb->attack = 100;
	barb->defense = 100;
	barb->hitPoints = 100;
	barb->manaPoints = 20;
	barb->manaRecoveryRate = 1;
}

void InitArcher(Character* archer)
{
	strcpy_s(archer->name, sizeof archer->name, "Archer");
	archer->attack = 80;
	archer->defense = 80;
	archer->hitPoints = 80;
	archer->manaPoints = 40;
	archer->manaRecoveryRate = 2;
}

void InitCleric(Character* cleric)
{
	strcpy_s(cleric->name, sizeof cleric->name, "Cleric");
	cleric->attack = 10;
	cleric->defense = 50;
	cleric->hitPoints = 70;
	cleric->manaPoints = 60;
	cleric->manaRecoveryRate = 4;
}


void InitMage(Character* mage)
{
	strcpy_s(mage->name, sizeof mage->name, "Mage");
	mage->attack = 10;
	mage->defense = 50;
	mage->hitPoints = 70;
	mage->manaPoints = 100;
	mage->manaRecoveryRate = 8;
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
	PrintCharacterStats(Barbarian);
	Character Archer;
	InitArcher(&Archer);
	PrintCharacterStats(Archer);
	Character Cleric;
	InitCleric(&Cleric);
	PrintCharacterStats(Cleric);
	Character Mage;
	InitMage(&Mage);
	PrintCharacterStats(Mage);



	return 0;
}
