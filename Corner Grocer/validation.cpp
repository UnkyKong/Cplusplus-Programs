#include <iostream>
#include <limits>

#include "validation.h"
#include "print.h"

// Function to validate user input
int Validation::userInput(const Print& print) const {
	int input; // Variable to store user input
	std::cin >> input; // Get user input
	// Check for input failure or out-of-range values
	while (std::cin.fail() || input < 1 || input > 4) {
		system("CLS"); // Clear the screen
		print.printMenu(); // Print the menu
		std::cout << "Invalid input. Please try again." << std::endl;
		std::cin.clear(); // Clear error flags
		// Ignore incorrect input rather than removing it
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard the input
		std::cin >> input; // Get user input again
	}
	// Return the validated input
	return input;
}
// Path: Corner%20Grocer/validation.cpp