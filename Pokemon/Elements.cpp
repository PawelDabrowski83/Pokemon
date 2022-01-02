#include "Elements.h"

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
	return 0;
}