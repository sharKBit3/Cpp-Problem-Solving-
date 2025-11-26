#include <iostream>

using namespace std;


enum enOdd_Even {
	Odd = 1, 
    Even = 0
};


int Read() {

	int N;

	cout << "****Welcome****" << endl;

	cout << " Enter a Number, Please!: " << endl;
	cin >> N;

	return N;

}


enOdd_Even CheckTypeOfN (int N) {
	
	if (N % 2 != 0)
		return enOdd_Even::Odd;
	else
		return enOdd_Even::Even;

}


int From_1_To_N_For(int N) {
	
	cout << "Printed (For Range Loop) by summing Odd Numbers Only from 1 to N \n" << endl;
	int Sum = 0;

	for (int Counter = 1; Counter < N; Counter++) {
		if (CheckTypeOfN(Counter) == enOdd_Even::Odd) {
			Sum += Counter;
		}
	}

	return Sum;

}


int From_1_TO_N_do_wh(int N) {
	int Counter =0;
	int Sum = 0;
	cout << "\nPrinted (Do/While Range Loop) by summing Odd Numbers Only from 1 to N \n" << endl;

	do {

		Counter++;
		if (CheckTypeOfN(Counter) == enOdd_Even::Odd) {
			Sum += Counter;
		}


	} while (Counter < N);

	return Sum;
}

int From_1_To_N_Wh(int N) {
	int Counter=0;
	int Sum=0;
	cout << "\nPrinted (While Range Loop) by summing Odd Numbers Only from 1 to N\n " << endl;

	while (Counter < N) {

		Counter++;
		if(CheckTypeOfN(Counter) == enOdd_Even::Odd){
			Sum += Counter;
		}

	}

	return Sum;

}


int main() {
	
	int N = Read();

	cout << From_1_To_N_For(N);
	cout << From_1_TO_N_do_wh(N);
	cout << From_1_To_N_Wh(N);

	return 0;

}

