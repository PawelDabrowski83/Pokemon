#pragma once
#include <vector>

template<typename T>
bool containsInVector(vector<T> array, T key)
{
	for (int i = 0; i < array.size(); i++) {
		if (key == array[i]) {
			return true;
		}
	}
	return false;
};
