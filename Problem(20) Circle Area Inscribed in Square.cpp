#include <iostream>
#include <cmath>

using namespace std;

float Read_SquareSide() {
	double D;

	cout << "Please Enter SquareSide: " << endl;
	cin >> D;

	return D;

}

double Circle_Area_Inscribed_in_a_Square(double A) {
	
	 const double Pi = 3.14;
	 

	 double Area = (Pi * pow(A, 2)) / 4;

	return Area;

}

void PrintResult(double Area) {

	
	cout << "The Circle Area by aSquare is : " << Area << endl;

}


int main() {

	PrintResult(Circle_Area_Inscribed_in_a_Square(Read_SquareSide()));


}
