/*
GPA calculator

input:
Class name
	This should be put into an array that can be sized by the user(I think this was a dynmaic array)
Class grade
	This should be attached to the items that are stored in the array(Store this as the double data type)
output:
GPA of the inputed class grades on the 4.0 scale.
	Store this as the double data type
*/

#include <iostream>
using namespace std;

int main() {

	//This is an empty string array. This will be what is used to store the name of the classes.
	//string myArray[arraySize] = {};
	int arraySize;

	cout << "How many classes are you taking this semester? " << endl;
	cin >> arraySize;
	
	cout << arraySize << endl;

	for (arraySize; arraySize <= 5; arraySize++) {
		;
	}

}