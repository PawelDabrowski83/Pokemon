#include "Utils.h"
#include "EnumElement.h"
#include <random>


bool containsInVector(const vector<EnumElement>& arr, const EnumElement& key)
{
	for (size_t i = 0; i < arr.size(); i++) {
		if (key == arr[i]) {
			return true;
		}
	}
	return false;
};

// from https://stackoverflow.com/a/20136256/13521548
int getRandom(int rangeFrom, int rangeTo)
{
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distr(rangeFrom, rangeTo);

	return distr(generator);
}