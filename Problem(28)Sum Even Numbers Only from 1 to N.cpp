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

};

enOdd_Even CheckTypeOfN (int N) {
	int Counter = N % 2;

	if (Counter == 0)
		return enOdd_Even::Even;
	else
		return enOdd_Even::Odd;

}

int SumEvenN_From_1_To_N_For(int N) {
	int Sum = 0;

	cout << "Sum even numbers using For Statement \n" << endl;

	for (int Counter = 1; Counter <= N; Counter++) {
		if (CheckTypeOfN(Counter) == enOdd_Even::Even) {
			Sum += Counter;
		}
	}

	return Sum;

}

int SumEvenN_From_1_TO_N_do_wh(int N) {
	int Counter =0;
	int Sum = 0;
	cout << "\nPrinted (Do/While Range Loop) by summing Odd Numbers Only from 1 to N \n" << endl;

	do {

		Counter++;
		if (CheckTypeOfN(Counter) == enOdd_Even::Even) {
			Sum += Counter;
		}


	} while (Counter < N);

	return Sum;
}

int SumEvenN_From_1_To_N_Wh(int N) {
	int Counter=0;
	int Sum=0;
	cout << "\nPrinted (While Range Loop) by summing Odd Numbers Only from 1 to N\n " << endl;

	while (Counter < N) {

		Counter++;
		if(CheckTypeOfN(Counter) == enOdd_Even::Even){
			Sum += Counter;
		}

	}

	return Sum;

}


int main() {
	
	int N = Read();

	cout << SumEvenN_From_1_To_N_For(N);
	cout << SumEvenN_From_1_TO_N_do_wh(N);
	cout << SumEvenN_From_1_To_N_Wh(N);

	return 0;

}