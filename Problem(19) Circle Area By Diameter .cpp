#include <iostream>
#include <cmath>

using namespace std;


float Read_Diameter() {
	double D;

	cout << "Enter your Number to complete the equation, Please: " << endl;
	cin >> D;

	return D;

}


double CircleAreabyDiameter(double D) {
	
	 const double Pi = 3.14;
	 double Area = (Pi * pow(D, 2)) / 4;

	return Area;

}


void PrintResult(double Area) {
	cout << "The Circle Area by Diameter is : " << Area << endl;

}


int main() {
	PrintResult(CircleAreabyDiameter(Read_Diameter()));
}

