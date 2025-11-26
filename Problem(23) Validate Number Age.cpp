#include <iostream>
using namespace std;

int Read() {
	int Age;
	cout << "Enter Your Age, Please! : " << endl;
	cin >> Age;

	return Age;
};


int Validate_Number_Age(int Num, int From, int To) {

	return (Num >= From && Num <= To);

};


void Print(int  Num) {

	if (Validate_Number_Age(Num, 18, 45)) {
		cout << "You can Apply " << Num << endl;
	}
	else {
		cout << "You can not Apply " << Num << endl;
	}

};


int main() {
	Print(Read());
}

