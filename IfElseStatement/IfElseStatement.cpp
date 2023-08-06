#include <iostream>

using namespace std;

typedef unsigned long long uint64;

int main()
{
    setlocale(0, "ru");
    //{
    //    int cents;
    //    int dollars;

    //    cout << "Enter dollars and cents -> ";
    //    cin >> dollars >> cents;

    //    int a = cents / 100;

    //    float rest = (float)cents / 100 - a; // 978.F / 100 - 9 => 0.78F

    //    dollars += a;

    //    float result = dollars + rest;

    //    cout << result;
    //}

    //////////////////////////

    // char(1), bool(1), short(2), int(2|4), float(4), long(4), double(8), long long(8);

    /* {
        signed short int a = 20; // short
        signed long int b = 20; // long
        signed long long int c = 20; // long long
        signed int d = 10;

        uint64 value = 20;

        cout << "a = " << a << '\n';
    }*/

    // +, -, *, /, $
    // ==, !=, >=, <=, >, <
    // =, +=, -=
    // 
    

    /* {
        int value;

        cout << "Enter value -> ";
        cin >> value;

        if (value > 0)
        {
            cout << "positive" << '\n';
        }
        else if (value < 0)
        {
            cout << "negative" << '\n';
        }
        else
        {
            cout << "zero" << '\n';
        }
    }*/

    /* {


        int value = 20;
        int result = 0;

        if (value % 2 == 0)
        {
            auto result = "even";

            cout << result << '\n';
        }

        cout << result;
    }*/


    // Task1
    /* {
        int num1;
        int num2;

        cin >> num1 >> num2;

        cout << num1 + num2 << '\n';

        float b;
    }*/


   // int num1;
    //int num2;

    // Task2
    /* {
        int num1;
        int num2;

        cin >> num1 >> num2;

        cout << num1 * num2 << '\n';

        {
            cout << "num1 = " << num1 << '\n';
            cout << "num2 = " << num2 << '\n';
        }
    }*/

    /* {
        // or - ||
        // and - &&
        // not - !

        int login;
        int password;

        cout << "Enter login: ";
        cin >> login;
        cout << "Enter password: ";
        cin >> password;

        if (login == 90 && password == 800)
        {
            cout << "Logged in!" << '\n';
        }
        else
        {
            cout << "Incorrect login or password!" << '\n';
        }
    }*/

    /* {
        int login;
        int password;
        int mode; // 1 - admin, 2 - mod

        cout << "Enter login: ";
        cin >> login;
        cout << "Enter password: ";
        cin >> password;
        
        cout << "Enter mode: ";
        cin >> mode;

        if (login == 90 && password == 800)
        {
            if (mode == 1 || mode == 2)
            {
                cout << "Logged in with additional rights" << '\n';
            }
            else
            {
                cout << "Logged in!" << '\n';
            }
            
        }
        else
        {
            cout << "Incorrect login or password!" << '\n';
        }
    }*/

    /*{
        int value = -1;

        // [1, 100]

        if ( !(value > 0 && value <= 100) )
        {
            cout << value << " is not in range";
        }
    }*/
}