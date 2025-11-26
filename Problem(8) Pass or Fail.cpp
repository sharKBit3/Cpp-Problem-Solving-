#include <iostream>
#include <string>

using namespace std;

enum enGrade { Pass = 1, Fail =0 };


int ReadGrade() {
	int Mark;
	cout << "Enter Student Grade in Pass(1) or Fail(0): " << endl;
	cin >> Mark;
	return Mark;
}


enGrade CheckMark(int Mark) {
	if (Mark >= 50)
		return enGrade::Pass;
	else
		return enGrade::Fail;
}


void Print(int Mark) {
	if (CheckMark(Mark) == enGrade::Pass)
		cout << "Pass";
	else
		cout << "Fail";
}


int main() {
	Print(ReadGrade());

		system("pause> 0");

}
