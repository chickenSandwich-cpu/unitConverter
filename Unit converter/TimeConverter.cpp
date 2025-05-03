#include "TimeConverter.h"
#include <iostream>
#include <string>
#include <algorithm> //for transform
#include <cctype> //for tolower

void TimeConverter::startConvertTime()
{
	std::cout << "Ay! Welcome to the Land of Time, choose between hours/minutes/seconds\n";

	std::cout << "Your choice (hours/minutes/seconds): "; std::cin >> timeType;
	std::transform(timeType.begin(), timeType.end(), timeType.begin(), [](unsigned char character) { return std::tolower(character); });

	std::cout << "What do you want to convert to? "; std::cin >> timeTypeConverted;
	std::transform(timeTypeConverted.begin(), timeTypeConverted.end(), timeTypeConverted.begin(), [](unsigned char character) { return std::tolower(character); });

	std::cout << "Got it! Please enter the value to start: "; std::cin >> timeValue;

	if (timeType == "hours") {
		if (timeTypeConverted == "hours") {
			std::cout << "Oh, it seems like you entered the same types for both, so your time value stays the same :D\n";
			std::cout << "It's gonna be " << timeValue << " hours!\n";
		}
		else if (timeTypeConverted == "minutes") {
			timeValue *= 60;
			std::cout << "This is your value converted from hours to minutes: " << timeValue << " minutes.\n";
		}
		else if (timeTypeConverted == "seconds") {
			timeValue *= 3600;
			std::cout << "This is your value converted from hours to seconds: " << timeValue << " seconds.\n";
		}
		else {
			std::cout << "Please enter a valid type :( try again please.\n";
		}
	}
	else if (timeType == "minutes") {
		if (timeTypeConverted == "minutes") {
			std::cout << "Oh, it seems like you entered the same types for both, so your time value stays the same :D\n";
			std::cout << "It's gonna be " << timeValue << " minutes!\n";
		}
		else if (timeTypeConverted == "hours") {
			timeValue /= 60;
			std::cout << "This is your value converted from minutes to hours: " << timeValue << " hours.\n";
		}
		else if (timeTypeConverted == "seconds") {
			timeValue *= 60;
			std::cout << "This is your value converted from minutes to seconds: " << timeValue << " seconds.\n";
		}
		else {
			std::cout << "Please enter a valid type :( try again please.\n";
		}
	}
	else if (timeType == "seconds") {
		if (timeTypeConverted == "seconds") {
			std::cout << "Oh, it seems like you entered the same types for both, so your time value stays the same :D\n";
			std::cout << "It's gonna be " << timeValue << " seconds!\n";
		}
		else if (timeTypeConverted == "hours") {
			timeValue /= 3600;
			std::cout << "This is your value converted from seconds to hours: " << timeValue << " hours.\n";
		}
		else if (timeTypeConverted == "minutes") {
			timeValue /= 60;
			std::cout << "This is your value converted from seconds to minutes: " << timeValue << " minutes.\n";
		}
		else {
			std::cout << "Please enter a valid type :( try again please.\n";
		}
	}
	else {
		std::cout << "Please enter a valid type :( try again please.\n";
	}
}
