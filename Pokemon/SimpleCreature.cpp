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
	return strength * 2 + dexterity + 2 * curLevel;
}

int SimpleCreature::getDexterity() const
{
	return dexterity;
}

void SimpleCreature::setDexterity(int value)
{
	this->dexterity = value > MAX_ATTRIBUTE ? MAX_ATTRIBUTE :
		value < MIN_ATTRIBUTE ? MIN_ATTRIBUTE : value;
}

int SimpleCreature::getHp() const
{
	return hp;
}

void SimpleCreature::setHp(int value)
{
	if (value > 0) {
		this->hp = value;
	}
	else {
		this->hp = 0;
	}
}

int SimpleCreature::getXp() const
{
	return xp;
}

void SimpleCreature::setXp(int value)
{
	this->xp = value;
}

int SimpleCreature::getLevel() const
{
	return level;
}

void SimpleCreature::setLevel(int value)
{
	if (value > 0) {
		this->level = value;
	}
	else {
		this->level = 0;
	}
}

int SimpleCreature::getCurStr() const
{
	return curStr;
}

void SimpleCreature::setCurStr(int value)
{
	this->strength = value > MAX_ATTRIBUTE ? MAX_ATTRIBUTE :
		value < MIN_ATTRIBUTE ? MIN_ATTRIBUTE : value;
}

int SimpleCreature::getCurDex() const
{
	return curDex;
}

void SimpleCreature::setCurDex(int value)
{
	this->dexterity = value > MAX_ATTRIBUTE ? MAX_ATTRIBUTE :
		value < MIN_ATTRIBUTE ? MIN_ATTRIBUTE : value;
}

int SimpleCreature::getCurHp() const
{
	return curHp;
}

void SimpleCreature::setCurHp(int value)
{
	this->curHp = value < 0 ? 0 : value;
}

int SimpleCreature::getCurLevel() const
{
	return curLevel;
}

void SimpleCreature::setCurLevel(int value)
{
	this->curLevel = value;
}

void SimpleCreature::print() const
{

}

void SimpleCreature::evolve()
{

}

bool SimpleCreature::isActive() const
{
	return curHp > 0;
}

bool SimpleCreature::attack(SimpleCreature& target) const
{
	return false;
}

void SimpleCreature::takeHarm(int hit) {
	setCurHp(getCurHp() - hit);
}

