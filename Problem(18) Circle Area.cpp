#include <iostream>
#include <cmath>

using namespace std;


float ReadRadious() {
	
	float R;

	cout << "Enter your Number to complete the equation, Please: " << endl;
	cin >> R;

	return R;
} 


double CircleArea(double R) {
	
	const float Pi = 3.14;
	
	int Area = Pi * pow(R, 2);

	return Area;

}


void Print(double Area) {

	cout << "The Circle Area  is: " << Area << endl;

}


int main() {

	Print(CircleArea(ReadRadious()));

}

