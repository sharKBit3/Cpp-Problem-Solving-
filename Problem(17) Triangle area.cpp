#include <iostream>
#include <cmath>

using namespace std;

void ReadNum(double &a, double &h) {
	cout << "Enter your First Number: " << endl;
	cin >> a;

	cout << "Enter your Second Number: " << endl;
	cin >> h;
} 


double Triangle(double a, double h) {

	double Area = (a / 2) * h;

	return Area;
}


void Print(double Area) {

	cout << "The Triangle area is: " << Area << endl;

}


int main() {
	double a, b;
	ReadNum(a, b);
	Print(Triangle(a, b));
}

