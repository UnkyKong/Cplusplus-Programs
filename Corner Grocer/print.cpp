#include "print.h"
#include <iostream>


// Function to print the menu
void Print::printMenu() const {
	std::cout << "Corner Grocer Inventory Management System" << std::endl;
	std::cout << "=========================================" << std::endl;
	std::cout << "1. Search for an item" << std::endl;
	std::cout << "2. Print list of items and quantities" << std::endl;
	std::cout << "3. Print items histogram" << std::endl;
	std::cout << "4. Exit" << std::endl;
}

// Function to print the list of items and quantities
void Print::printQuantities(const std::map<std::string, int>& items) const {
	system("cls"); // Clear the screen
	std::cout << "List of Items and Quantities:" << std::endl;
	// Loop through the map and print each item and quantity
	for (const auto& pair : items) {
		// Print the item and its quantity
		std::cout << pair.first << " " << pair.second << std::endl;
	}
	std::cout << std::endl;
}


// Function to print the items histogram
void Print::printHistogram(const std::map<std::string, int>& items) const {
	system("cls"); // Clear the screen
	std::cout << "Items Histogram:" << std::endl;
	// Loop through the map and print a histogram for each item
	for (const auto& pair : items) {
		// Print the item and a histogram of asterisks based on the quantity
		std::cout << pair.first << " ";
		// Print asterisks for the quantity
		for (int i = 0; i < pair.second; i++) {
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

// Path: Corner%20Grocer/print.cpp
