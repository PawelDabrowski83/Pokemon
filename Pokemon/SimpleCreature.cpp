#include <string>
#include "SimpleCreature.h"
#include "EnumElement.h"

using namespace std;

// initialize static counter
int SimpleCreature::count = 0;



SimpleCreature::SimpleCreature() 
{
	this->id = count++;
	this->name = "Creature " + id;
	this->type = WATER;
	this->strength = 1;
	this->dexterity = 1;
	this->hp = calculateHp();
	this->xp = 0;
	this->level = 0;
	this->curStr = strength;
	this->curDex = dexterity;
	this->curHp = hp;
	this->curLevel = level;
}

int SimpleCreature::getId() const
{
	return id;
}

string SimpleCreature::getName() const
{
	return name;
}

void SimpleCreature::setName(string name)
{
	this->name = name;
}

EnumElement SimpleCreature::getType() const
{
	return type;
}

int SimpleCreature::getStrength() const
{
	return strength;
}

void SimpleCreature::setStrength(int value)
{
	this->strength = value > MAX_ATTRIBUTE ? MAX_ATTRIBUTE :
		value < MIN_ATTRIBUTE ? MIN_ATTRIBUTE : value;
}

int SimpleCreature::calculateHp() const
{
	return strength * 2 + dexterity;
}

/*
	int getDexterity() const;
	void setDexterity(int value);
	int getHp() const;
	void setHp(int value);
	int getXp() const;
	int getLevel() const;
	void setLevel(int level);
	int getCurStr() const;
	void setCurStr(int value);
	int getCurDex() const;
	void setCurDex(int value);
	int getCurHp() const;
	void setCurHp(int value);
	int getCurLevel() const;
	void setCurLevel(int value);
	void print() const;
	void evolve();
	bool isActive() const;
	bool attack(SimpleCreature& target) const;
	void takeHarm(int hit);
*/