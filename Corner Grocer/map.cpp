#include "map.h"
#include <fstream>
#include <sstream>
#include <iostream>


// Class function to create and return a map with item counts
std::map<std::string, int> Map::createMap() const {
    std::map<std::string, int> items; // Map to store items and their counts
    std::string line; // Variable to store each line of the file

    std::ifstream file("CS210_Project_Three_Input_File.txt"); // Open the input file
    if (file.is_open()) {
        // Read each line of the file
        while (std::getline(file, line)) {
            // Trim whitespace from the line if necessary
            line.erase(remove_if(line.begin(), line.end(), isspace), line.end());

            // Increment the count for the item in the map
            items[line]++;
        }
        file.close(); // Close the file
    }
    else {
        // Print an error message if the file cannot be opened
        std::cerr << "Unable to open file." << std::endl;
    }
    // Return the map of items and their counts
    return items;
}

// Class function to make a frequncy.dat file
void Map::makeFrequencyFile(const std::map<std::string, int>& items) const {
	std::ofstream file("frequency.dat"); // Open the output file
    if (file.is_open()) {
        // Write each item and its count to the file
        for (const auto& pair : items) {
            // Write the item and its count to the file
			file << pair.first << " " << pair.second << std::endl;
		}
		file.close(); // Close the file
	}
    else {
		// Print an error message if the file cannot be opened
		std::cerr << "Unable to open file." << std::endl;
	}
}

// Class function to search for an item in the map
void Map::searchItem(const std::map<std::string, int>& items) const {
    	std::string item; // Variable to store the item to search for
    	system("CLS"); // Clear the screen
    	std::cout << "Enter the item you would like to search for:" << std::endl << std::endl;
    	// list of items in map
    	for (const auto& pair : items) {
            // Print the item
    		std::cout << pair.first << std::endl;
    	}
        // Get the item to search for
        std::cout << std::endl;
    	std::cin >> item;
    
    	// Check if the item exists in the map
    	auto it = items.find(item);// Find the item in the map
        // Print the number of times the item appears in the map
    	if (it != items.end()) {
            // Print the number of times the item appears in the map
            system("CLS"); // Clear the screen
    		std::cout << it->first << " found " <<  it->second << " times" << std::endl;
            std::cout << std::endl;
    	}
    	else {
			// Print an error message if the item is not found
    		std::cout << "Item not found." << std::endl;
    	}
    }
// Path: Corner%20Grocer/map.cpp