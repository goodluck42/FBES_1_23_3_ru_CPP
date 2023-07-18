// FirstProject.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main()
{
    /*
    cout << "Hello C++" << '\n' << "Goodbye Python!" << '\n';

    int value; // declaration (объявление переменной)

    value = 42; // initialization (инициализация переменной)

    cout << value << '\n';


    */
    //////////
    /*
    int a = -5,
        b = 10,
        c = 20;

    int val{};  // int val = 0;

    cout << val << '\n';
    */

    //////////

    /*int num1,
        num2;

    cout << "Enter first number -> ";
    cin >> num1;
    cout << "Enter second number -> ";
    cin >> num2;

    int result = num1 / num2;

    cout << num1 << '/' << num2 << '=' << result << '\n';
    */

    //////////
    
    char c = '@'; // 1 byte
    unsigned char uc = '@'; // 1 byte
    bool b = true; // 1 byte

    // integer types
    signed short int s = 32767 + 0b1111; // 2 bytes
    unsigned short int us = -66000; // 2 bytes

    int i = 9000; // 2 or 4 bytes
    unsigned int ui = 9000; // 2 or 4 bytes

    long l = 42000; // 4 bytes
    unsigned long ul = 90000; // bytes

    long long ll = 90000000; // 8 bytes
    unsigned long long ull = 9000000; // 8 bytes

    // floating types

    float f = 42.13F; // 4 bytes
    double d = 42.13; // 8 bytes
    long double ld = 90.22; // 8 bytes

    cout << sizeof(double) << '\n';

    setlocale(0, "ru");

    cout << "Привет \\C++!" << '\n';
}

// CTRL (hold) + K + C - to comment
// CTRL (hold) + K + U - to uncomment