#include <iostream>

using namespace std;

struct strOD {
    bool Even = false;
	bool Odd = false;

};



int ReadOnly() {
	int N;

	cout << "Enter your Number Please!: " << endl;
	cin >> N;

	return N;
};



strOD checkNType(int N) {
	
	strOD result;
	
	if (N % 2 == 0)
		result.Even = true;
	else
		result.Odd = true;

	return result;
};



void Print(strOD type) {


	if (type.Even) 
		cout << "Even" << endl;
	
	else
		cout << "Odd"  << endl;
};





int main() {

	Print(checkNType(ReadOnly()));


}


