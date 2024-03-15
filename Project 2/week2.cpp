#include <iostream>
#include <string>
using namespace std;

int main() {

	double temp;

	cout << "This program will convert numbers from degrees Celsius to degrees Fahrenheit. \n ";

	cout << "Please enter a temperature value in degrees Celsius:  ";
		cin >> temp;

	double newtemp;
	newtemp = (temp * 9 / 5) + 32;
	
	cout << "The temperature in Fahrenheit is " + to_string(newtemp) + " degrees. \n";
	




	system("pause");

}