#include "StatBlock.h"

StatBlock::StatBlock(int value) : value(value)
{
}

int StatBlock::getValue() const 
{
	return this->value;
}

void StatBlock::decrease(int value)
{
	if (this->value - value < MIN_VALUE) {
		this->value = MIN_VALUE;
	}
	else {
		this->value = this->value - value;
	}
}

void StatBlock::increase(int value)
{
	if (this->value + value > MAX_VALUE) {
		this->value = MAX_VALUE;
	}
	else {
		this->value = this->value + value;
	}
}

void StatBlock::increment()
{
	increase(1);
}

void StatBlock::decrement()
{
	decrease(1);
}
