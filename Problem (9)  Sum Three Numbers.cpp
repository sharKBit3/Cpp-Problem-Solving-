#include <iostream>

using namespace std;

void Read(int &x, int &y, int &z) {

	cout << "Enter your First Number: " << endl;
	cin >> x;
	cout << "Enter your Second Number: " << endl;
	cin >> y;
	cout << "Enter your Third Number: " << endl;
	cin >> z;

}

int Sum(int x, int y, int z) {
	return (x + y + z);
}


void Print(int Total) {
	cout << "\n\nYour Sum Total is: " << Total;
}


int main() {
	
	int x, y, z;
	Read(x, y, z);
	Print(Sum(x, y, z));


	system("pause > 0");
}
