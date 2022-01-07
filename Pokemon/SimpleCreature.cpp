#include <string>
#include "SimpleCreature.h"
#include "EnumElement.h"

using namespace std;

/*
	string getName() const;
	void setName(string name);
	EnumElement getType() const;
	int getStrength() const;
	void setStrength(int value);
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

SimpleCreature::SimpleCreature() 
{
	id = count++;
	name = "Creature " + id;
	type = WATER;
	this->strength = 

}

int SimpleCreature::getId() const
{
	return id;
}