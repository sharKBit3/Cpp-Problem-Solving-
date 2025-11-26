#include <iostream>

using namespace std;

void ReadNumbers(int &N1, int &N2, int &N3) {
	cout << "\t**Welcome To The Channel**\t" << endl;
	cout << "Enter your First digit Number, PLease! " << endl;
	cin >> N1;

	cout << "Enter your Second digit Number, PLease! " << endl;
	cin >> N2;

	cout << "Enter your Third digit Number, PLease! " << endl;
	cin >> N3;
	
}


int MaxOf2Numbers(int N1, int N2, int N3) {

	if (N1 > N2) {
		return N1;
	}
	else if(N2> N1)
		return N2;
	else if (N2> N3) {
		return N2;
	}
	else {
		return N3;
	}
}



void PrintResults(float Max) {
	
	cout << "The Max Number is: " << Max;

}



int main() {

	int N1, N2, N3;

	ReadNumbers(N1, N2, N3);

	PrintResults(MaxOf2Numbers(N1, N2, N3));

}
