#include <iostream>
using namespace std;
enum enPass_Fail { Pass = 1, Fail= 2 };

void ReadNumbers(int &x, int &y, int &z) {

	cout << "Enter your First Number: " << endl;
	cin >> x;

	cout << "Enter your Second Number: " << endl;
	cin >> y;

	cout << "Enter your Third Number: " << endl;
	cin >> z;

}
int Sum(int x, int y, int z) {

	return x + y + z;

}

int CalculateAverage(int x, int y, int z) {

	
	return (float)Sum( x, y, z) / 3;

}

enPass_Fail CheckAverage(float Average) {
	
	if (Average >= 50)
		return enPass_Fail::Pass;
	else
		return enPass_Fail::Fail;


}

void PrintResults(float Average) {
	cout << "Your Total Avarage is: " << Average;

	if (CheckAverage(Average) == enPass_Fail::Pass) 
		cout << "\tPass";
	else
		cout << "\tFail";
}
int main() {

	int x, y, z;
	ReadNumbers(x,y,z);
	PrintResults(CalculateAverage(x, y, z));

}
