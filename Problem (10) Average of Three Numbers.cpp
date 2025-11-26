#include <iostream>

using namespace std;

void ReadNum(int &x, int &y, int &z) {
	cout << "Enter your First Number: " << endl;
	cin >> x;

	cout << "Enter your Second Number: " << endl;
	cin >> y;

	cout << "Enter your Third Number: " << endl;
	cin >> z;
}


int Ava(int x, int y, int z) {
	return (x + y + z) / 3;
}


void Print(int TotalAva) {
	cout << "Your Total Avarage is: " << TotalAva;
}


int main() {

	int x, y, z;
	ReadNum(x,y,z);
	Print(Ava(x,y,z));
	
}
