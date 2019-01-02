#include <iostream>
#include <string>
using namespace std;

int main()
{

    string myName;
    cout << "Please enter your full name ";
    getline(cin, myName);

    cout << "Welcome to the number addition program, " << myName << endl;


    int inputA = 0;
    int inputB = 0;

    cout << "Please enter the first number ";
    cin >> inputA;

    cout << "Please enter the second number ";
    cin >> inputB;

    cout << "The sum of those numbers is " << inputA + inputB << endl;


    return 0;
}
