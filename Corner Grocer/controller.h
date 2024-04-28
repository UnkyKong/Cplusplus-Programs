#pragma once

#include "map.h"
#include "print.h"
#include "validation.h"

// Controller class that will be used to start the program
class Controller
{
public:
		void start(); // Function to start the program

private: 
	Map map; // Map object
	Print print; // Print object
	Validation validate; // Validation object
};
// Path: Corner%20Grocer/controller.h
