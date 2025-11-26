#include <iostream>
#include <cmath>


using namespace std;


int Read() {

	int N;

	cout << "Enter a Number, Please! : " << endl;
	cin >> N;


	return N;

}



void PowerEq(int N) {

	int a, b, c;

	a = N * N;
	b = N * N * N;
	c = N * N * N;

	cout << a << " " << b << " " << c << endl;

	//or simply
    cout << pow(N, 2) << pow(N, 3) << pow(N,4);



}




int main() {

	PowerEq(Read());

}