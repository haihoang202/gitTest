#include <iostream>
#include "object.h"
#include "object_one.h"
#include "object_two.h"

void detail1(ObjectOne& one);
void detail2(ObjectTwo& two);
void detail(Object& object);


void detail(Object& object)
{
	object.printout();
}

void detail1(ObjectOne& one)
{
	detail(one);
}

void detail2(ObjectTwo& two)
{
	detail(two);
}

int main()
{
	/* code */
	ObjectOne o1(1);
	ObjectTwo o2(2);

	detail1(o1);
	detail2(o2);

	return 0;
}