//tellg(), tellp(), seekg() and seekp()
// tellg() and tellp() - no params, return int pos_type which represents the current
//		position of the get (tellg) or put (tellp) stream pointers
// seekg() and seekp() - allow to change position of get and put stream pointers;
//	both functions are overloaded with 2 different prototypes:
//		seekg ( position ); // stream pointer is changed to absolute position, 
//		seekp ( position );		// counting from beginning of file
//	this is the same position as returned by tellg() and tellp() (pos_type)
//		seekg ( offset, direction ); // the position of get or put pointer is set
//		seekp ( offset, direction );	// to an offset value relative to a specific
//		point determined by param 'direction'. 'offset' is of type int off_type.
//		'direction' is of type seekdir - an enumerated tyoe that determines the point
//		from where an offset is counted from; can take values:
// 	ios::beg 	offset counted from the beginning of the stream
//	ios::cur 	offset counted from the current position of the stream pointer
//	ios::end 	offset counted from the end of the stream

// obtaining file size example
#include <iostream>
#include <fstream>
using namespace std;

int main () {
	long begin,end;
	ifstream myfile ("example.txt");
	begin = myfile.tellg(); 
	myfile.seekg (0, ios::end); // 0 offset as counted from end of the stream
	end = myfile.tellg();
	myfile.close();
	cout << "size is: " << (end-begin) << " bytes.\n";
	return 0;
}

