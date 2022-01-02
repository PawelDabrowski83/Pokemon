#pragma once
#include <string>
#include <vector>

using namespace std;

class Elements
{
protected:
	vector<Elements> beats;
	vector<Elements> beaten;
public:
	Elements(string, vector<Elements>, vector<Elements>);
	string name;
	string getName() const;
	int attackOn(Elements) const;
};
