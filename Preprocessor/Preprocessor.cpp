#include <iostream>
#include "Db.h"
#include "User.h"
#include "console/console.h"


int value = 42;

void Call()
{
    static int counter; // DATA / BSS (Block Started by Symbol)

    ++counter;
    
    std::cout << counter << '\n';
}


inline int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    {
        std::cout << Sum(5, 10) << '\n';
    }
    
    // {
    //     Call();
    //     Call();
    //     Call();
    // }

    {
        std::cout << "STATIC: \n";
        UserCounter = 90;

        SetUserCounter_U(42);
    
        ShowUserCounterAddress();
        ShowUserCounterAddress_U();
        std::cout << "main.cpp: " << &UserCounter << " (" << UserCounter << ")" << '\n';
    }


    {
        std::cout << "EXTERN: \n";

        SetSharedUserCounter_U(99);

        ShowSharedUserCounterAddress();
        ShowSharedUserCounterAddress_U();

        std::cout << "main.cpp: " << &SharedUserCounter << " (" << SharedUserCounter << ")" << '\n';
    }
    
    std::cout << '\n';
    system("pause");
}

// #include <windows.h>
// #include <iostream>
//
// #include "console/console.h"
//
// using namespace app::console;
//
// int main(int argc, char* argv[])
// {
//     // {
//     //     HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//     //
//     //     SetConsoleCursorPosition(handle, {2, 5});
//     //
//     //     std::cout << "Hello C++";
//     // }
//
//
//     
//     
//     
//     return 0;
// }
