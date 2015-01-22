// classes example
#include <iostream>
using namespace std;

class CRectangle { 		// creates class called CRectangle with properties int x, y
		int x, y;
	public:				// these functions of CRectangle are accessible by all other functions
		void set_values (int, int);		//prototype declaration only; scope operator (::) will
// be needed to define the function later since it will be beyond the scope of the class
		int area () {return (x*y);}		// only the area is returned when 'area' is called
};

void CRectangle::set_values (int a, int b) { // scope operator(::) - used to 
// define a member of a class from outside the the class definition itself
// since the function is initially delcared within the class
// otherwise g++ perceives this as a global function;
// makes it as though the function were defined right inside the class itself;
	x = a;
	y = b; // 
}

int main ()
{
	CRectangle rect; // creates an object rect of type CRectangle
					// meaning it will have all the properties defined above
	rect.set_values (3,4);	// object rect of type CRectangle is evaluated by 
// function set_values, whose input a, b becomes x, y
	cout << "area: " << rect.area() << "\n";
// object rect now has int values 3, 4; these are evaluated as x,y in public area function above
	return 0;
}

