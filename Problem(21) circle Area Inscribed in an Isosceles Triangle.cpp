#include <iostream>
#include <cmath>

using namespace std;

void Read_Triangle_Data(float &a, float &b) {
	

	
	cout << "Enter your First Number, Please : " << endl;
	cin >> a;

	cout << "Enter your Last Number, PLease: " << endl;
	cin >> b;


}

double Circle_Area_By_Triangle(float a, float b) {
	
	 const double Pi = 3.14;
	 

	 double Area = (Pi) * ((pow(b,2))/4) * ((2*a-b)/(2*a+b));

	return Area;

}

void PrintResult(double Area) {

	
	cout << "The Circle Area By Triangle is : " << Area << endl;

}


int main() {

	float a, b;

	Read_Triangle_Data(a, b);
	PrintResult(Circle_Area_By_Triangle(a,b));

}
