#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>

#include "Character.h"




/// <summary>
/// Methods to initialize the player's character stats
/// </summary>

void InitBarbarian(Character* barb);
void InitArcher(Character* archer);
void InitCleric(Character* cleric);
void InitMage(Character* mage);
