// const_cast
// this manipulates the constantness of an object, either to be set or removed;
// in order to pass a const argument to a function that expects a non-const param:

#include <iostream>
using namespace std;

void print (char* str)
{
	cout << str << endl;
}

int main () {
	const char* c = "sample text";
	print ( const_cast <char*> (c) ); // casts const char str as a simple char str
	return 0;	// for void function
}


