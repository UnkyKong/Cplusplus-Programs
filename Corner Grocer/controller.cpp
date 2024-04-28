#include "controller.h"

#include <iostream>

// Function to start the program
void Controller::start() {
	int input; // Variable to store user input
	auto items = map.createMap(); // Create a map of items
	map.makeFrequencyFile(items); // Create a frequency file

	do {
		print.printMenu(); // Print the menu
		input = validate.userInput(print); // Get user input

		// Switch statement to handle user input
		switch (input)
		{
			// Search for an item
		case 1:
			map.searchItem(items);
			break;
			// Print list of items and quantities
		case 2:
			print.printQuantities(items);
			break;
			// Print items histogram
		case 3:
			print.printHistogram(items);
			break;
			// Exit the program
		case 4: std::cout << "Exiting the Program" << std::endl;
			break;

		default:
			break;
		}
	// Loop until the user chooses to exit
	} while (input != 4);

}
// Path: Corner%20Grocer/controller.cpp