#pragma once
#ifndef MAP_H
#define MAP_H

#include <map>
#include <string>

// Map class that will be used to create a map of items
class Map {
public:

    std::map<std::string, int> createMap() const ; // Function to create and return a map with item counts
	void searchItem(const std::map<std::string, int>& items) const; // Function to search for an item in the map
	void makeFrequencyFile(const std::map<std::string, int>& items) const; // Function to make a frequency.dat file
};

#endif // MAP_H

// Path: Corner%20Grocer/map.h