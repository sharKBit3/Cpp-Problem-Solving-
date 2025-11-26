#include <iostream>
#include <string>


int ReadPositiveN(std::string Message) {
	int N;

	do {
		
		std::cout << Message;
		std::cin >> N;

	} while (N < 0);

	return N;
}



int Factorial(int N) {

	int F = 1;

	if (N == 0) {

		return 0;

	}

	for (int counter = N; counter >= 1; --counter) {

		F = F * counter;

	}

	return F;	

}



int main() {

	 std::cout << Factorial(ReadN("Enter Number???"));

}