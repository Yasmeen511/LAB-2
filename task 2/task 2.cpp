// task 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;
    cout << "Enter the first num and the secoend num:";
    cin >> num1 >> num2;
    cout << "Enter the op(+,-,*,/):\n";
    cin >> op;
    if (op == '+')
    {
        cout << "The result is:" << num1 + num2;
    }
    else  if (op == '-') {
        cout << "The result is:" << num1 - num2;
    }
    else if (op == '*') {


        cout << "The result is:" << num1 * num2;
    }
    else if (op == '/') {
        if (num2 == 0)
            cout << "Undefined op";
        else {
            cout << "The result is:" << num1 / num2;
        }
    }
    else {
        cout << "Entered wrong input";
    }
    return 0;
} 


