#pragma once
#include <vector>

using namespace std;

template<typename T>
bool containsInVector(const vector<T>& arr, const T& key)
{
	for (int i = 0; i < arr.size(); i++) {
		if (key == arr[i]) {
			return true;
		}
	}
	return false;
};
