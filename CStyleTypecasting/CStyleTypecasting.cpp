#include <iostream>

using namespace std;

int main()
{
    // int(2|4), char(1), float(4), bool(1), short(2), long(4), long long(8), double(8)
    // unsigned int, 

    /*cout << "SHRT_MAX = " << SHRT_MAX << '\n';
    cout << "SHRT_MIN = " << SHRT_MIN << '\n';*/

    /* {


        // signed short example
        //        ( -32768) + 4
        short s = 32767 + 1 + 4;

        cout << "s = " << s << '\n';

        // unsigned short example 1
        //                  (      0) + 4             
        unsigned short us = 65535 + 1 + 4;

        cout << "us = " << us << '\n';

        // unsigned short example 2
        //                   (-1 + 0) + -4 
        //                   ( 65535) + -4 
        unsigned short us2 = -10;

        cout << "us2 = " << us2 << '\n';
    }*/

    /*cout << "CHAR MAX = " << CHAR_MAX << '\n';
    cout << "CHAR MIN = " << CHAR_MIN << '\n';
    cout << "UNSIGNED CHAR MAX = " << UCHAR_MAX << '\n';
    cout << "UNSIGNED CHAR MIN = " << 0 << '\n';*/

/* {
    // ascii extended sample
        //       (255 - 65) + 1
    char c = -65;

    unsigned char uc = 191;

    cout << c << '\n';
    cout << uc << '\n';
}*/

// const unsigned int value = 1330U;

// value = 90; // error

// literals
/* {
    char c = '@'; // character literal
    bool b = true; // boolean literal


    // integer types
    auto i = 42; // integer literal
    auto ui = 42U; // unsigned integer literal

    auto l = 90L; // long literal
    auto ul = 90UL; // unsigned long literal

    auto ll = 69LL; // long long literal
    auto ull = 69ULL; // unsigned long long literal

    // floating types

    auto f = 52.2F; // 52.F
    auto d = 13.9;

    // strings

    auto str = "C++"; // const char[4]
}*/


// implicit typecasting
/*{


    char c = 64; // int to char
    int val = '@'; // char to int
    float f = 20.13; // double to float
    float f2 = 190; // int to float
    int i = true; // bool to int
    bool b = '\0'; // char to bool

    cout << boolalpha;

    cout << c << '\n';
    cout << val << '\n';
    cout << f << '\n';
    cout << f2 << '\n';
    cout << i << '\n';
    cout << b << '\n';
}*/

// arithmetic operators
/* {
    long long a = 10LL;
    double b = 3.2;

    auto result = a * b;

    cout << result << '\n';

    ////////////////////////

    double n1 = 9;
    double n2 = 3;

    auto result2 = n1 / n2;

    cout << result2 << '\n';

    ////////////////////////

    long num1 = 90;
    long long num2 = 60;

    auto result3 = num1 / num2;

    cout << result3 << '\n';
}*/

/*{
    int val = 31;
    int result = val % 2; // error
    // int result = val % 2.5; // error

    cout << result << '\n';
}*/

    // explicit typecasting
    /*{
        char c = '#';

        int code = (int)c; // int(c) in python

        cout << code << '\n';
        cout << (int)c << '\n';
    }*/
    
    int value;
    
    cout << "Enter a value -> ";
    cin >> value;
}