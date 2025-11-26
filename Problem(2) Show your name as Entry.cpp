#include <iostream>
#include <string>


using namespace std;

string ReadOnly() {
	string name;
	cout << "enter your name: " << flush;
	getline(cin, name);
	return name;
}


void print(string name) {
	cout << "your name is: " << name;
}


int main() {
	print(ReadOnly());

}
