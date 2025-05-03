#pragma once
#include <string>

class SpeedConverter
{
public:
	void startConvertSpeed();

private:
	double speedValue;
	std::string speedType;
	std::string speedTypeConverted;
};

