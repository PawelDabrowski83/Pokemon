#include "Utils.h"
#include "EnumElement.h"

bool containsInVector(const vector<EnumElement>& arr, const EnumElement& key)
{
	for (size_t i = 0; i < arr.size(); i++) {
		if (key == arr[i]) {
			return true;
		}
	}
	return false;
};