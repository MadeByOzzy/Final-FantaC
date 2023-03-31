#include "InitCharacters.h"

void InitBarbarian(Character* barb)
{
	strcpy_s(barb->name, sizeof barb->name, "Barbarian");
	barb->attack = 100;
	barb->defense = 100;
	barb->hitPoints = 100;
	barb->manaPoints = 20;
	barb->manaRecoveryRate = 1;
	PrintCharacterStats(*barb);
}

void InitArcher(Character* archer)
{
	strcpy_s(archer->name, sizeof archer->name, "Archer");
	archer->attack = 80;
	archer->defense = 80;
	archer->hitPoints = 80;
	archer->manaPoints = 40;
	archer->manaRecoveryRate = 2;
	PrintCharacterStats(*archer);
}

void InitCleric(Character* cleric)
{
	strcpy_s(cleric->name, sizeof cleric->name, "Cleric");
	cleric->attack = 10;
	cleric->defense = 50;
	cleric->hitPoints = 70;
	cleric->manaPoints = 60;
	cleric->manaRecoveryRate = 4;
	PrintCharacterStats(*cleric);
}


void InitMage(Character* mage)
{
	strcpy_s(mage->name, sizeof mage->name, "Mage");
	mage->attack = 10;
	mage->defense = 50;
	mage->hitPoints = 70;
	mage->manaPoints = 100;
	mage->manaRecoveryRate = 8;
	PrintCharacterStats(*mage);
}
