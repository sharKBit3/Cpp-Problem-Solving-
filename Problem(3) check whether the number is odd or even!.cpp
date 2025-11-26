#include <iostream>

using namespace std;


enum enNumberType { Odd = 1 , Even = 2 };


int ReadNumber() {
	int Num;
	cout << "enter your number: " << endl;
	cin >> Num;
	return Num;
}


enNumberType checkNumberType(int Num) {

	int Result = Num % 2;
	if (Result == 0) {
		return enNumberType ::Even;
	}
	else {
		return enNumberType ::Odd;
	}
}

void print(enNumberType numberType) {
	
	if (numberType == enNumberType::Even) {
		cout << "\n Number is Even \n";
	}
	else if(numberType == enNumberType:: Odd) {
		cout << " Number is odd\n";
	}

}


int main() {

	print(checkNumberType(ReadNumber()));
	return 0;

}
