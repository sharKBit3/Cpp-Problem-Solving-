#include <iostream>


using namespace std;


void ReadNumbers(int& N1, int& N2) {
	cout << "****Welcome to The Program!****" << endl;
	cout << "Enter your First Number: " << endl;
	cin >> N1;

	cout << "Enter your Second Number: " << endl;
	cin >> N2;
};


void Swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
};



void PrintNumbers(int N1, int N2) {
	cout << "\nFirst Number is : " << N1 << flush;
	cout << "Second Number is: " << N2 << endl;

};



int main() {
	int N1, N2;
		
	ReadNumbers(N1, N2);
	PrintNumbers(N1, N2);
	Swap(N1, N2);
	PrintNumbers(N1,N2);
}
