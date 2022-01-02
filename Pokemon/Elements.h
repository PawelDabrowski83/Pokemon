#pragma once
#include <string>
#include <vector>

using namespace std;

class Elements
{
protected:
	vector<string> beats;
	vector<string> beaten;
public:
	Elements(string, vector<string>, vector<string>);
	string name;
	string getName() const;
	int attackOn(Elements) const;
};
