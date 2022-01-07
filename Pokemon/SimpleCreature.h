#pragma once
#include <string>
#include "EnumElement.h"

using namespace std;

class SimpleCreature
{
protected:
	int id;
	string name;
	EnumElement type;
	int strength;
	int dexterity;
	int hp;
	int xp;
	int level;
	int curStr;
	int curDex;
	int curHp;
	int curLevel;
public:
	static int count;
	const static int MAX_ATTRIBUTE = 20;
	const static int MIN_ATTRIBUTE = 1;
	SimpleCreature();
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
	void setXp(int value);
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
	int calculateHp() const;
};
