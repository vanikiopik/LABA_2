#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	double a, b, x, z, result;
	int choice, n = 0;

	//check for number input
	cout << "Enter a - ";
	if (!(cin >> a)) {
		cout << "Wrong input" << endl;
		return 0;
	}
	
	cout << "Enter b - ";
	if (!(cin >> b)) {
		cout << "Wrong input" << endl;
		return 0;
	}
	cout << "Enter z - ";
	if (!(cin >> z)) {
		cout << "Wrong input" << endl;
		return 0;
	}

	//Finding x 
	if (z >= 1) {
		x = pow(sin(z), 2);
		n = n + 1;
	}
	else {
		x = z + 2;
	}

	cout << "Choice function that will be used" << endl;
	cout << "1. f(x) = 2x" << endl;
	cout << "2. f(x) = x*x" << endl;
	cout << "3. f(x) = x / 3" << endl;
	cin >> choice;



	switch(choice) {
		case 1: 
			result = (2 * a * 2 * x + b * cos(sqrt(abs(x)))) / x * x + 5;
			if (n == 1) {
				cout << result << endl << "Function - f(x) = 2x" << endl << "Was used z, greater or same than 1";
			}
			else {
				cout << result << endl << "Function - f(x) = 2x" << endl << "Was used z, lower than 1";
			}
			break;
		case 2:
			result = (2 * a * x * x + b * cos(sqrt(abs(x)))) / x * x + 5;
			if (n == 1) {
				cout << result << endl << "Function - f(x) = x*x" << endl << "Was used z, greater or same than 1";
			}
			else {
				cout << result << endl << "Function - f(x) = x*x" << endl << "Was used z, lower than 1";
			}
			break;
		case 3:
			result = (2 * a * x / 3 + b * cos(sqrt(abs(x)))) / x * x + 5;
			if (n == 1) {
				cout << result << endl << "Function - f(x) = x / 3" << endl << "Was used z, greater or same than 1";
			}
			else {
				cout << result << endl << "Function - f(x) = x / 3" << endl << "Was used z, lower than 1";
			}
			break;
	}

}