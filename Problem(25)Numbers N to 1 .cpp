#include <iostream>

using namespace std;

int ReadOnly() {

	int N;
	
	cout << "****Welcome to the Program****" << endl;
	
	cout << "Enter a Number: " << endl;
	cin >> N;

	return N;
}


void From_N_to_1_While(int N) {

	cout << "Printed Ranged Loop While: " << endl;


	int C = N + 0;

	while (C >= 1) {

		cout << C << endl;
		C--;

	}
	

}  

void From_N_to_1_For(int N) {
	
	cout << "Printed Ranged Loop For: " << endl;

	int C = N + 0;
	for (int C = N; C >= 1; C--) {

		cout << C << endl;

	}


}

void From_N_To_1_doWhile(int N) {

	cout << "Printed Ranged Loop doWhile: " << endl;

	int C = N + 0;

	do {
		cout << C << endl;
		C--;

	} while (C >= 1);


}

int main() {
	
	int N = ReadOnly();
	
	From_N_to_1_While(N);

	From_N_to_1_For(N);

	From_N_To_1_doWhile(N);

}