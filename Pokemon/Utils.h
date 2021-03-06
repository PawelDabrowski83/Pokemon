#pragma once
#include <vector>
#include "EnumElement.h"

using namespace std;

/* - Simplify method to evade compile error C2440

template<typename T>
bool containsInVector(const vector<T>& arr, const T& key)
{
	for (size_t i = 0; i < arr.size(); i++) {
		if (key == arr[i]) {
			return true;
		}
	}
	return false;
};
*/
bool containsInVector(const vector<EnumElement>&, const EnumElement&);

int getRandom(int, int);

EnumElement getRandom(const vector<EnumElement>&);
