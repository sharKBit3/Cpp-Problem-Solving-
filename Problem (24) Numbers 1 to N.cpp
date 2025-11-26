//1 -> N

#include <iostream>

using namespace std;



int ReadNumber() {

	int N;
	cout << "Enter your number ~ N " << endl;
	cin >> N;

	return N;
}


void form_1_to_N_using_While(int N) {
	
	cout << "Range Printed Statment using While: " << endl;
	int i = 1;

	while (i <= N) {
		cout << i << endl;

		i++;
	}

}

void form_1_to_N_usingdo_While(int N) {

	cout << "Range Printed Statment using do/While: " << endl;

	int i=1;
	
	do {
		cout << i << endl;
		i++;

	} while (i <= N);

}



void form_1_to_N_usingFor(int N) {

	cout << "Range Printed Statment using For: " << endl;

	for (int i = 1; i <= N; i++) {
		cout << i << endl;
	}

}



int main() {

	int N = ReadNumber();

	form_1_to_N_using_While(N);
	form_1_to_N_usingFor(N);
	form_1_to_N_usingdo_While(N);


}