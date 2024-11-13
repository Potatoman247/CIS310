#include <iostream>

using namespace std;

int main()
{
	int feet, inches;
	double centimeters;

	try {
		cout << "Input How Many Feet: ";
		cin >> feet;
		if (!cin) {
			throw string("Not an Integer");
		}
		if (feet < 0) {
			throw feet;
		}
		cout << "\nInput How Many Inches: ";

		cin >> inches;
		if (!cin) {
			throw string("Not an Integer");
		}
		if (inches < 0) {
			throw inches;
		}
		centimeters = (feet * 30.48) + (inches * 2.54);
		cout << "\n" << centimeters << " Centimeters";

	}
	catch (int n) {
		cout << "Error: Input " << n << " Is A Negative Number" << endl;
	}
	catch (string s) {
		cout << "Error: Input Is " << s << endl;
	}
}
