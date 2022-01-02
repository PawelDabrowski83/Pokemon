#include "Utils.h"
#include "Elements.h"

bool containsInVector(const vector<Elements>& arr, const Elements& key)
{
	for (size_t i = 0; i < arr.size(); i++) {
		if (key == arr[i]) {
			return true;
		}
	}
	return false;
};