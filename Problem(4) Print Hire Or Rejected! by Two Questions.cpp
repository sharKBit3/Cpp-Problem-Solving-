#include <iostream>
#include <string>


using namespace std;

enum Check_Hire_Rejected { H = 21, R = 0 };

int ReadAge() {
    int Age;
    cout << "Enter your Age, please : " << endl;
    cin >> Age;
    return Age;
}

string ReadDL() {
    string DL;
    cout << "Do you have a Driver License? (Yes/No): " << endl;
    cin >> DL;
    return DL;
}

Check_Hire_Rejected Info(int Age, string DL) {
    if (Age >= 21 && DL == "Yes")
        return Check_Hire_Rejected::H;
    else
        return Check_Hire_Rejected::R;
}

void Print(Check_Hire_Rejected result) {
    if (result == Check_Hire_Rejected::H)
        cout << "**Congratulation > You will be Hired**" << endl;
    else
        cout << "**Rejected Request**" << endl;
}

int main() {

    int Age = ReadAge();
    string DL = ReadDL();

    Print(Info(Age, DL));

    return 0;

    system("pause>0");
}
