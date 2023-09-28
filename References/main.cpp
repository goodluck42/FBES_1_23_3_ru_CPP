#include <iostream>
#include "Array.h"

void change(int& value)
{
    value = 90;
}

void change(int* value)
{
    *value = 90;
}

int main(void)
{

    // const int* / pointer to const value
    // {
    //     const int* data = new int{42};
    //
    //     // *data = 99; //error
    //     
    //     std::cout << *data << '\n';
    //
    //     delete data;
    //     
    //     data = new int{90};
    //
    //     std::cout << *data << '\n';
    //
    //     delete data;
    // }


    // int* const / const pointer to value
    // {
    //     int* const data = new int{42};
    //     
    //     std::cout << *data << '\n';
    //     
    //     // data = new int{90}; // error
    //
    //     *data = 99;
    //     
    //     std::cout << *data << '\n';
    //
    //     delete data;
    // }

    //  const int* const / const pointer to const value
    // {
    //     const int* const data = new int{42};
    //
    //     std::cout << *data << '\n';
    //
    //     // *data = 90; // error
    //
    //     // data = new int{61}; // error
    //
    //     delete data;
    // }

    // References
    // {        
    //     int data = 42;
    //     int& ref = data;
    //     
    //     ref = 90;
    //
    //     std::cout << data << '\n';
    // }

    /*
    {
        int a = 50;
        int b = 20;
        
        // 50 = a;

        // (a + b) = 90;
    }*/

    // {
    //     int a = 50;
    //
    //     change(a);
    //
    //     std::cout << a << '\n';
    // }

    // {
    //     // int* const ptr;
    //
    //     int a = 42;
    //     int b = 10;
    //     
    //     int& ref = a;
    //
    //     ref = 15;
    //     ref = b;
    //     ref = 90;
    //
    //     std::cout << a << '\n' << b << '\n';
    //     
    // }

    {
        Array<double> arr = create<double>();

        append(arr, 10.5);
        append(arr, 10.1);
        append(arr, 22.8);
        append(arr, 13.37);
        append(arr, 4.19);
        append(arr, 4.20);

        print(arr);

        destroy(arr);
    }
    
    return 0;
}
