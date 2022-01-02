#pragma once
#include <string>
#include <vector>
#include "EnumElement.h"

using namespace std;

class Elements
{
protected:
	vector<EnumElement> beats;
	vector<EnumElement> beaten;
public:
	string name;
	
	Elements(const EnumElement&);
	Elements* initialize(const vector<EnumElement>&, const vector<EnumElement>&);
	
	string getName() const;
	int attackOn(const EnumElement&) const;
	EnumElement* getElement() const;

	bool operator ==(const Elements&) const;
};
