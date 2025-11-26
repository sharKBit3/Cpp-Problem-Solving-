#include <iostream>
#include <cmath>

using namespace std;


void ReadNum(double &a, double &d) {
	cout << "Enter your First Number: " << endl;
	cin >> a;
	cout << "Enter your Second Number: " << endl;
	cin >> d;
}


double RectangleArea_diagonal_Side(double a, double d) {

	return a * sqrt ( pow ( d, 2) - pow (a, 2)) ;

}


void Print(double Area) {
	cout << "The RectangleArea diagonal Side is: " << Area << endl;
}


int main() {
	double a, b;
	ReadNum(a, b);
	Print(RectangleArea_diagonal_Side(a, b));
}
