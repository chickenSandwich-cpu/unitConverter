#include <iostream>
#include <vector>
#include "TempConverter.h"
#include "TimeConverter.h"
#include "SpeedConverter.h"

int main()
{
	int convertChoice = 0;
	std::vector<std::string> choices = { "Temperature", "Time" , "Speed" };
	std::cout << "Hello, welcome to the unit converter, what do you want to convert to today? Choose a number :wink:\n";
	for (int i = 0; i < choices.size(); i++) {
		std::cout << '\t' << i + 1 << ". " << choices[i] << '\n';
	}
	std::cout << "Enter your choice here: __\b\b"; std::cin >> convertChoice; std::cout << '\n';

	switch (convertChoice)
	{
	case 1:
	{
		TempConverter startTemp;
		startTemp.startConvertTemp();
		break;
	}
	case 2:
	{
		TimeConverter startTime;
		startTime.startConvertTime();
		break;
	}
	case 3:
	{
		SpeedConverter startSpeed;
		startSpeed.startConvertSpeed();
		break;
	}
	default:
		std::cout << "Please enter a valid choice :(\n";
		break;
	}
}