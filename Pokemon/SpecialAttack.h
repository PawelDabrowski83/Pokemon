#pragma once

class SpecialAttack
{
protected:
	
public:
	int ownStrengthModifier;
	int targetStrengthModifier;
	int ownDexterityModifier;
	int targetDexterityModifier;
	int targetSpecialPowerBlock;
	int maxSpecialPowerDuration;
	int currentSpecialPowerDuration;
	bool isActive;
	void activate();
	void reset();
};
