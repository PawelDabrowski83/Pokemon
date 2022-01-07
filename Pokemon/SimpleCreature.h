#pragma once
#include <string>
#include "EnumElement.h"
#include "StatBlock.h"

using namespace std;

class SimpleCreature
{
protected:
	static int count;
	int id;
	string name;
	EnumElement type;
	StatBlock strength;
	StatBlock dexterity;
	int hp;
	int xp;
	int level;
	StatBlock curStr;
	StatBlock curDex;
	int curHp;
	int curLevel;
public:
	int getId() const;
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
};
