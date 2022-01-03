#pragma once
#include <string>
#include "EnumElement.h"
#include "Elements.h"
#include "StatBlock.h"

using namespace std;

class Creature
{
protected:
	static int count;
	int id;
	string name;
	Elements elementalType;
	StatBlock strength;
	StatBlock dexterity;
	int maxHealth;
	int currentHealth;
	int maxPowerUse;
	int currentPowerUse;
	int specialPowerBonus;
	int specialPowerMagnitude;
	int currentXp;
	int currentLevel;

public:
	Creature();
	Creature(EnumElement);
	int getId() const;
	string getName() const;
	Elements* getElementalType() const;


};