#include <iostream>
#include "max.h"
#include "Object.h"

int main()
{
	using namespace std;
	int x = 5, y = 6, z;
	double m = 10.0, n = 11.0, p;

	z = getMax<double>(x,y);
	cout << z << endl;

	p = getMax<double>(m,n);
	cout << p << endl;

	Object<int> obj1(12);
	Object<long> obj2(19999999999999999);

	obj1.printout();
	obj2.printout();

	return 0;

}