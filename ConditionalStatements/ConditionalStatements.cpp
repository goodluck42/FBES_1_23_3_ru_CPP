#include <iostream>
#include <cstdlib>
#ifdef __APPLE__
#include <tkMacOSX.h>
#endif
// macro
#define PRINT_CPP std::cout << "Hello C++" << '\n';

// macro-function
#define CREATE_VAR(TYPE, NAME) TYPE G##NAME;

#define CREATE_SUM(TYPE) TYPE Sum_##TYPE(TYPE a, TYPE b) \
{ \
    return a + b; \
}

CREATE_VAR(int, Value123)

CREATE_SUM(int)
CREATE_SUM(float)
CREATE_SUM(long)
CREATE_SUM(double)
CREATE_SUM(int64_t)

#define DEBUG


void CrossPlatformFunc()
{
    #ifdef _WIN64
        std::cout << "Windows x64" << '\n';
    #elif defined(_WIN32)
        std::cout << "Windows x86" << '\n';
    #else
        #ifdef __APPLE__
            std::cout << "MacOS only!" << '\n';
        #else
            std::cout << "Undefined OS" << '\n';
        #endif
    #endif
}

// void CrossPlatformFunc()
// {
//     std::cout << "Windows only!" << '\n';
// }

// void CrossPlatformFunc()
// {
//     std::cout << "MacOS only!" << '\n';
// }

#include "User.h"
#include "User.h"

int main(int argc, char* argv[])
{    
    User user;
    
    CrossPlatformFunc();
    //PRINT_CPP

    // std::cout << GValue123 << '\n';
    //
    // std::cout << Sum_int(2, 5) << '\n';
    // std::cout << Sum_float(2.5f, 5.2f) << '\n';
    // std::cout << Sum_double(2.1, 5.2) << '\n';

    // __LINE__
    // __DATE__
    // __COUNTER__
    // __FILE__

    /*{
        auto test = __FILE__;
    
        std::cout << "filename = " << test << '\n';
    }*/




    int** mdarr = new int*[3];

    for (int i = 0; i < 3; ++i)
    {
        mdarr[i] = new int[3];
    }

    return 0;
}
