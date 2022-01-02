#pragma once

class StatBlock
{
protected:
	int value;
public:
	const int MAX_VALUE = 20;
	const int MIN_VALUE = 1;
	StatBlock(int value);
	int getValue() const;
	void increase(int value);
	void decrease(int value);
	void increment();
	void decrement();
};

