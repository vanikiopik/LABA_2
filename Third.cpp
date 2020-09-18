#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	double x, y, z, min, max, result;
	//check for number input
	cout << "Enter x - ";
	if (!(cin >> x)) {
		cout << "Wrong input" << endl;
		return 0;
	}
	cout << "Enter y - ";
	if (!(cin >> y)) {
		cout << "Wrong input" << endl;
		return 0;
	}
	cout << "Enter z - ";
	if (!(cin >> z)) {
		cout << "Wrong input" << endl;
		return 0;
	}

	//Checking for incorrect dominator
	if (x < 0 && y < 0 && z == 0) {
		cout << "Error, try again";
		return 0;
	}
	else if (x < 0 && y == 0 && z < 0) {
		cout << "Error, try again";
		return 0;
	}
	else if (x == 0  && y < 0 && z < 0) {
		cout << "Error, try again";
		return 0;
	}


	//Find for min value
	if (x + y <= y - z) {
		cout << "x + y < y - z" << endl;
		min = x + y;
	}
	else {
		cout << "x + y > y - z" << endl;
		min = y - z;
	}
	
	//Find for max value
	if (x > y && x > z) {
		cout << "x - max" << endl;
		max = x;
	}
	else if (y > x && y > z) {
		cout << "y - max" << endl;
		max = y;
	}
	else if (z > x && z > y) {
		cout << "z - max" << endl;
		max = z;
	}

	//Calculate the result
	result = min / max;
	cout << "Result = " << result;
}