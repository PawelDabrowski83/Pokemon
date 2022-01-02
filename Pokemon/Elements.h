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
	string name;
	
	Elements(const string&);
	Elements* initialize(const vector<Elements>&, const vector<Elements>&);
	
	string getName() const;
	int attackOn(const Elements&) const;

	bool operator ==(const Elements&) const;
};
