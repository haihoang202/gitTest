#include <iostream>
#include "object.h"

#pragma once

class ObjectOne : public Object
{

private:
	int one;

public:
	ObjectOne() : one(0) {};
	void printout() { std::cout << one << std::endl; };

	ObjectOne(int one) : one(one) {};
};