#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main()
{
	double a, b, x, z, denom, result;

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

	//check for branch choice
	if (a * b <= z) {
		cout << "First branch";
		x = pow(sin(z), 2) + abs(a * b * z);
	}
	else {
		cout << "Second branch" << endl;
		x = sqrt(pow(a, 2) + pow(a, 2) * z);
	}

	//Find the denominator
	denom = x + a * b;

	//Calculating main result
	if (z > 0 && denom != 0) {
		result = (a * x + b * x * cos(sqrt(x))) / denom;
		cout << result;
	}
	else {
		cout << "Wrong input";
	}
}