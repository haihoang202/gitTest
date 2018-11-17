#include <iostream>

using namespace std;

template<class T>
class Object 
{
	T value;
public:
	Object(T object) : value(object) {};
	void printout();
};

template<class T>
void Object<T>::printout() 
{
	cout << value << endl;
}