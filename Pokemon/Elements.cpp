#include "Elements.h"
#include "Utils.h"

Elements::Elements(const string& name) {
	this->name = name;
}

void Elements::initialize(const vector<Elements>& beats, const vector<Elements>& beaten) {
	this->beats = beats;
	this->beaten = beaten;
}

string Elements::getName() const
{
	return this->name;
}

int Elements::attackOn(const Elements& target) const
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