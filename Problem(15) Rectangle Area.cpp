#include <iostream>

using namespace std;


void ReadNum(double &a, double &b) {
	cout << "Enter your First Number: " << endl;
	cin >> a;
	cout << "Enter your Second Number: " << endl;
	cin >> b;
} 


double RectangleArea(double a, double b) {
	return a * b;
}


void Print(double Area) {
	cout << "The Rectangle area is: " << Area  << endl;
}


int main() {
	double a, b;
	ReadNum(a, b);
	Print(RectangleArea(a, b));
}

