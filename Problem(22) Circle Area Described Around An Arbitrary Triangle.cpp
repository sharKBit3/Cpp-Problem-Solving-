#include <iostream>
#include <cmath>

using namespace std;


void ReadOnly(double&a, double&b, double&c) {
	
	cout << "****Welcome To Your Program****\n\n" << endl;

	cout << "Enter your First Number: " << endl;
	cin >> a;

	cout << "Enter your Second Number: " << endl;
	cin >> b;

	cout << "Enter your Third Number: " << endl;
	cin >> c;

}


double Circle_Area_Described_Around_An_Arbitrary_Triangle(double a, double b, double c) {

	double p;
	const float PI = 3.14;
	p = ((a + b + c) / 2);

	double Area = PI*(pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2));
	
	return Area;
}

void Print(double Area) {

	cout << "Result =  " << Area << endl;

}


int main() {

	double a, b, c;
	ReadOnly(a, b, c);
	Print(Circle_Area_Described_Around_An_Arbitrary_Triangle(a, b, c));

}
