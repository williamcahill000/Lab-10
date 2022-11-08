// Your name
// Your UMKC Email Address
// Today's date
// CS201L Lab 10

#include "StudentInfo.h"

int main() {

	// Declare any extra variables needed

	ifstream fin("input1.txt");
	
	if (!fin.is_open())
	{
		cout << "Could not open the input file input1.txt" << endl;
		return -1;
	}
	
	while (!fin.eof())
	{
		string item, command;
		fin >> item >> command;

		// Logic of handling the input.


	}
	fin.close();

	// Output the final linked list.

	// Free up all memory.

}