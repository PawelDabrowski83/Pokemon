#pragma once

class SpecialAttack
{
protected:
	int ownStrengthModifier;
	int targetStrengthModifier;
	int ownDexterityModifier;
	int targetDexterityModifier;
	int targetSpecialPowerBlock;
	int maxSpecialPowerDuration;
	int currentSpecialPowerDuration;
	bool isActive;
public:
	SpecialAttack();
	int getOwnStrengthModifier() const;
	void setOwnStrengthModifier(int value);
	int getTargetStrengthModifier() const;
	void setTargetStrengthModifier(int value);
	int getOwnDexterityModifier() const;
	void setOwnDexterityModifier(int value);
	int getTargetDexterityModifier() const;
	void setTargetDexterityModifier(int value);
	int getMaxSpecialPowerDuration() const;
	void setMaxSpecialPowerDuration(int value);
	int getCurrentSpecialPowerDuration() const;
	void setCurrentSpecialPowerDuration(int value);
	bool isActive() const;
	void activate();
	void reset();
};
