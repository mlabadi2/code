// dynamic allocation of polymorphism

#include <iostream>
using namespace std;

class CPolygon {
	protected:
		int width, height;
	public:
		void set_values (int a, int b)
			{ width=a; height=b; }
		virtual int area (void) =0; // pure virtual declaration
		void printarea (void)
			{cout << this->area() << endl; }
	};

class CRectangle: public CPolygon {
	public:
		int area (void)
			{ return (height*width); }
	};

class CTriangle: public CPolygon {
	public:
		int area (void)
			{return (height * width /2); }
	};

int main () {
	CPolygon* ppoly1 = new CRectangle;  // pointers are declared under base class
	CPolygon* ppoly2 = new CTriangle; // but dynamic memory is allocated under derived 
	// class directly
	ppoly1 -> set_values (4,5);
	ppoly2 -> set_values (4,5);
	ppoly1->printarea();
	ppoly2->printarea();
	delete ppoly1;
	delete ppoly2;
	return 0;
}

