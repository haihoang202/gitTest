#include <iostream>
#include "object.h"

#pragma once

class ObjectTwo : public Object
{

private:
	int two;

public:
	ObjectTwo() : two(0) {};
	void printout() { std::cout << two << std::endl; };
	
	ObjectTwo(int two) : two(two) {};
};