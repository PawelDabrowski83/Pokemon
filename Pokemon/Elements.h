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
	
	Elements(string);
	void initialize(const vector<Elements>&, const vector<Elements>&);
	
	string getName() const;
	int attackOn(const Elements&) const;
};
