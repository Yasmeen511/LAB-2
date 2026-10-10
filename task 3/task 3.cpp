// task 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character:";
    cin >> ch;

    if (ch >= 65 && ch <= 90)
        cout << ch << "is a small letter";

    else if (ch >= 97 && ch <= 122)
        cout << ch << "is a capital letter";

    else if (ch >= 48 && ch <= 57)
        cout << ch << "is a digit";

    else if (ch > 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127)
        cout << ch << "is a special character";

    return 0;


}

