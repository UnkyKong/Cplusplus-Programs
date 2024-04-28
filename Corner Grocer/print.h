#pragma once
#ifndef PRINT_H
#define PRINT_H

#include <map>
#include <string>

// Print class that will be used to print the menu, quantities, and histogram
class Print
{
public:
	void printMenu() const; // Function to print the menu
	void printQuantities(const std::map<std::string, int>& items) const; // Function to print the list of items and quantities
	void printHistogram(const std::map<std::string, int>& items) const; // Function to print the items histogram

};
#endif

// Path: Corner%20Grocer/print.h