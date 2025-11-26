#include <iostream>
#include <string>

using namespace std;

struct info {
    string Name;
    string Surname;
};


info ReadInfo() {
    info Person;
    cout << "Enter your Name: ";
    cin >> Person.Name;

    cout << "Enter your Lastname: ";
    cin >> Person.Surname;

    return Person;
}


string FullName(info Person, bool Reversed) {
    
    string Fullname = "";
   
    if (Reversed) 
        Fullname = Person.Surname + " " + Person.Name;
    else
        Fullname = Person.Name + " " + Person.Surname;


    return Fullname;
}


void Print(string FullName) {
    cout << "Your Fullname is: " << FullName << endl;
}


int main() {
    Print(FullName(ReadInfo(),true));
}
