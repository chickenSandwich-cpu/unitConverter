#pragma once
#include <string>

class TimeConverter
{
public:
	void startConvertTime();

private:
	double timeValue;
	std::string timeType;
	std::string timeTypeConverted;
};

