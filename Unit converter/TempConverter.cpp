#include "TempConverter.h"
#include <iostream>

void TempConverter::startConvertTemp()
{
	std::cout << "Choose your temperature scale between Celcius/Fahrenheit/Kelvin\n";
	std::cout << "Your choice (C/F/K): "; std::cin >> tempType;
	std::cout << "Convert the temperature to what scale? "; std::cin >> tempTypeConverted;
	std::cout << "Got it! Enter the temperature value here (decimal values are allowed): _______\b\b\b\b\b\b\b"; std::cin >> tempValue; std::cout << '\n';

	const double CelsiusAndKelvinToFahrenheit = 9.0 / 5.0;
	const double FahrenheitToCelsiusAndKelvin = 5.0 / 9.0;

	if (tempType == 'C' || tempType == 'c') {
		if (tempTypeConverted == 'C' || tempTypeConverted == 'c') {
			std::cout << "Oh, it seems like you entered the same types for both, so your temperature value stays the same :D\n";
			std::cout << "It's gonna be " << tempValue << " Celsius!\n";
		}
		else if (tempTypeConverted == 'F' || tempTypeConverted == 'f') {
			tempValue = (tempValue * CelsiusAndKelvinToFahrenheit) + 32;
			std::cout << "Here is the result converted from Celcius to Fahrenheit: " << tempValue << '\n';
			//std::cout << "This is also equals to " 
		}
		else if (tempTypeConverted == 'K' || tempTypeConverted == 'k') {
			tempValue += 273.15;
			std::cout << "Here is the result converted from Celcius to Kelvin: " << tempValue << '\n';
		}
		else {
			std::cout << "Please enter a valid type :( try again please.\n";
		}
	}
	else if (tempType == 'F' || tempType == 'f') {
		if (tempTypeConverted == 'F' || tempTypeConverted == 'f') {
			std::cout << "Oh, it seems like you entered the same types for both, so your temperature value stays the same :D\n";
			std::cout << "It's gonna be " << tempValue << " Fahrenheit!\n";
		}
		else if (tempTypeConverted == 'C' || tempTypeConverted == 'c') {
			tempValue = (tempValue - 32) * FahrenheitToCelsiusAndKelvin;
			std::cout << "Here is the result converted from Fahrenheit to Celcius: " << tempValue << '\n';
			//std::cout << "This is also equals to " 
		}
		else if (tempTypeConverted == 'K' || tempTypeConverted == 'k') {
			tempValue = (tempValue + 459.67) * FahrenheitToCelsiusAndKelvin;
			std::cout << "Here is the result converted from Fahrenheit to Kelvin: " << tempValue << '\n';
		}
		else {
			std::cout << "Please enter a valid type :( try again please.\n";
		}
	}
	else if (tempType == 'K' || tempType == 'k') {
		if (tempTypeConverted == 'K' || tempTypeConverted == 'k') {
			std::cout << "Oh, it seems like you entered the same types for both, so your temperature value stays the same :D\n";
			std::cout << "It's gonna be " << tempValue << " Kelvin!\n";
		}
		else if (tempTypeConverted == 'C' || tempTypeConverted == 'c') {
			tempValue -= 273.15;
			std::cout << "Here is the result converted from Kelvin to Celcius: " << tempValue << '\n';
		}
		else if (tempTypeConverted == 'F' || tempTypeConverted == 'f') {
			tempValue = (tempValue - 273.15) * CelsiusAndKelvinToFahrenheit + 32;
			std::cout << "Here is the result converted from Kelvin to Fahrenheit: " << tempValue << '\n';
		}
		else {
			std::cout << "Please enter a valid type :( try again please.\n";
		}
	}
	else {
		std::cout << "Please enter a valid type :( try again please.\n";
	}
}