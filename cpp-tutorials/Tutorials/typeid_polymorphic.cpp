// typeid - polymorphic class
#include <iostream>
#include <typeinfo>
#include <exception>
using namespace std;

class CBase { virtual void f() {} };
class CDerived: public CBase {};

int main () {
	try {
		CBase* a = new CBase;
		CBase* b = new CDerived;
		cout << "a is: " << typeid(a).name() << '\n';
		cout << "b is: " << typeid(b).name() << '\n';
		cout << "*a is: " << typeid(*a).name() << '\n';
		cout << "*b is: " << typeid(*b).name() << '\n';
	} catch (exception& e) {cout << "Exception: " << e.what() << endl;
}
	return 0;
}

// the type that typeid considers for pointers is the pointer type itself (both a and b are of
// type class CBase *). However, when typeid is applied to objects (like *a and *b) typeid 
// yields their dynamic type (i.e. the type of their most derived complete object)

// If the type typeid evaluates is a pointer preceded by the dereference operator (*), and 
// this pointer has a null value, typeid throws a bad_typeid exception.
