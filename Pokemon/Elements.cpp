#include "Elements.h"
#include "Utils.h"

Elements::Elements(string name) {
	this->name = name;
}

void Elements::initialize(vector<Elements> beats, vector<Elements> beaten) {
	this->beats = beats;
	this->beaten = beaten;
}

string Elements::getName() const
{
	return this->name;
}

int Elements::attackOn(Elements target) const
{
	if (containsInVector(beats, target)) {
		return 1;
	}
	if (containsInVector(beaten, target)) {
		return -1;
	}
	return 0;
}