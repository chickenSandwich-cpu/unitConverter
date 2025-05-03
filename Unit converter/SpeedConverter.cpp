#include "SpeedConverter.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

void SpeedConverter::startConvertSpeed()
{
	std::cout << "Welcome to the Speed of Nothingness, choose between km/h, m/s, mph\n";
	std::cout << "Your choice (km/h, m/s, mph): "; std::cin >> speedType;
	std::transform(speedType.begin(), speedType.end(), speedType.begin(), [](unsigned char character) { return std::tolower(character); });
	std::cout << "What do you want to convert to? "; std::cin >> speedTypeConverted;
	std::transform(speedTypeConverted.begin(), speedTypeConverted.end(), speedTypeConverted.begin(), [](unsigned char character) { return std::tolower(character); });
	std::cout << "Got it! Please enter the value to start: "; std::cin >> speedValue;

	const double kmhAndmps = 3.6;
	const double kmhAndmph = 1.60934;
	const double mphAndmps = 2.23694;

	if (speedType == "km/h") {
		if (speedTypeConverted == "km/h") {
			std::cout << "Oh, it seems like you entered the same types for both, so your speed value stays the same :D\n";
			std::cout << "It's gonna be " << speedValue << " km/h!\n";
		}
		else if (speedTypeConverted == "m/s") {
			speedValue /= kmhAndmps;
			std::cout << "This is your value converted from km/h to m/s: " << speedValue << " m/s.\n";
		}
		else if (speedTypeConverted == "mph") {
			speedValue /= kmhAndmph;
			std::cout << "This is your value converted from km/h to mph: " << speedValue << " mph.\n";
		}
		else {
			std::cout << "Please enter a valid type :( try again please.\n";
		}
	}
	else if (speedType == "m/s") {
		if (speedTypeConverted == "m/s") {
			std::cout << "Oh, it seems like you entered the same types for both, so your speed value stays the same :D\n";
			std::cout << "It's gonna be " << speedValue << " m/s!\n";
		}
		else if (speedTypeConverted == "km/h") {
			speedValue *= kmhAndmps;
			std::cout << "This is your value converted from m/s to km/h: " << speedValue << " km/h.\n";
		}
		else if (speedTypeConverted == "mph") {
			speedValue *= mphAndmps;
			std::cout << "This is your value converted from m/s to mph: " << speedValue << " mph.\n";
		}
		else {
			std::cout << "Please enter a valid type :( try again please.\n";
		}
	}
	else if (speedType == "mph") {
		if (speedTypeConverted == "mph") {
			std::cout << "Oh, it seems like you entered the same types for both, so your speed value stays the same :D\n";
			std::cout << "It's gonna be " << speedValue << " mph!\n";
		}
		else if (speedTypeConverted == "km/h") {
			speedValue *= kmhAndmph;
			std::cout << "This is your value converted from mph to km/h: " << speedValue << " km/h.\n";
		}
		else if (speedTypeConverted == "m/s") {
			speedValue /= mphAndmps;
			std::cout << "This is your value converted from mph to m/s: " << speedValue << " m/s.\n";
		}
		else {
			std::cout << "Please enter a valid type :( try again please.\n";
		}
	}
	else {
		std::cout << "Please enter a valid type :( try again please.\n";
	}
}