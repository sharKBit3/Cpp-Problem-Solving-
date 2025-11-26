#include <iostream>


using namespace std;


void ReadNumbers(int &N1, int &N2) {
	cout << "\t**Welcome To The Channel**\t" << endl;
	cout << "Enter your First digit Number, PLease! " << endl;
	cin >> N1;

	cout << "Enter your Second digit Number, PLease! " << endl;
	cin >> N2;
}


int MaxOf2Numbers(int N1, int N2) {

	if (N1 > N2) {
		return N1;
	}
	else
		return N2;

}


void PrintResults(float Max) {
	
	cout << "The Max Number is: " << Max;

}


int main() {
	int N1, N2;
	ReadNumbers(N1, N2);
	PrintResults(MaxOf2Numbers(N1, N2));
}
