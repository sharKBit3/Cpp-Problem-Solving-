#include <iostream>

using namespace std;

struct stInfo{
	
	int Age;
	bool DriveLicene;
	bool HasRecommendation;
};



stInfo  ReadOnly() {
	stInfo Info;

	cout << "Enter your Age: " << endl;
	cin >> Info.Age;

	cout << "Do you have a driver License: Enter 1(yes)/0(No):   " << endl;
	cin >> Info.DriveLicene;

	cout << "Do you have Recommendation?: " << endl;
	cin >> Info.HasRecommendation;

	return Info;
}



bool  IsAccepted(stInfo Info) {
	if (Info.HasRecommendation == 1) {
		true;
	}
	else if(Info.HasRecommendation == 0) {
		false;
		}else{
		return (Info.Age > 21 && Info.DriveLicene);
	}
}



void PrintResult(stInfo Info) {
	if (IsAccepted(Info)) {
		cout << "\nHired" << endl;
	}
	else {
		cout << "\nRejected" << endl;
	}
}



int main() {
	
	PrintResult(ReadOnly());
}
