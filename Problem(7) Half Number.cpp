#include <iostream>
#include <string>

using namespace std;

int ReadNum() {
	int Num;
	cout << "Enter your Number please : " << endl;
	cin >> Num;
	return Num;
};


float CalHalfNumber(int Num) {
	return (float)Num / 2;
};


void Print(int Num) {
	 string Result = "Half of" + to_string(Num) + " is " + to_string(CalHalfNumber(Num));

	 cout << "\n" << Result << endl;
}


int main() {
	Print(ReadNum());

	return 0;
	
	system("pause> 0");
}
