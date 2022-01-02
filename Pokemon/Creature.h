#pragma once
#include <string>
#include "EnumElement.h"
#include "Elements.h"

using namespace std;

class Creature
{
protected:
	static int count;
	int id;
	string name;
	Elements elementalType;
public:
	Creature();
	Creature(EnumElement);
	int getId() const;
	string getName() const;
	Elements* getElementalType() const;


};