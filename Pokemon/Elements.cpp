#include "Elements.h"
#include "Utils.h"

Elements::Elements(const EnumElement& name) {
	this->name = name;
}

Elements* Elements::initialize(const vector<EnumElement>& beats, const vector<EnumElement>& beaten) {
	this->beats = beats;
	this->beaten = beaten;
	return this;
}

string Elements::getName() const
{
	return this->name;
}

int Elements::attackOn(const EnumElement& target) const
{
	if (containsInVector(beats, target)) {
		return 1;
	}
	if (containsInVector(beaten, target)) {
		return -1;
	}
	return 0;
}

bool Elements::operator== (const Elements& target) const
{
	return this->getName() == target.getName();
}