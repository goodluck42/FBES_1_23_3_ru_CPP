#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void foo(const char* text) // immutable char array
{
    
}

void foo(char* text) // mutable char array
{
    
}

int main(int argc, char* argv[])
{
    char* str = new char[8];
    foo(str);
    
    /*{
        const char* str = "C++";
        const char* str2 = "C++";

        std::cout << (void*)str << '\n';
        std::cout << (void*)str2 << '\n';

        if (str == str2)
        {
            std::cout << "Equals";
        }
        else
        {
            std::cout << "Not equals";
        }
    }*/

    // Comparison
    /*{
        char str1[16] = "C++";
        char str2[16] = "C++";

        if (str1 == str2)
        {
            std::cout << "Equals";
        }
        else
        {
            std::cout << "Not equals";
        }
    }*/

    /*{
        char text[] = "C++"; // char*
        
        std::cout << text;
    }*/

    /*{
        char text[6];

        text[0] = 'C';
        text[1] = '+';
        text[2] = '+';
        text[3] = '\0';

        std::cout << text;
    }*/

    /*{
        char the_truth[] = "C++ is better\0than Python";
        
        std::cout << the_truth;
    }*/

    /*{
        int size = 16;
        char* text = new char[size]{};

        text[0] = 'C';
        text[1] = '+';
        text[2] = '+';

        std::cout << text;
        
        delete[] text;
    }*/

    // strlen
    /*{
        char stack_str[16] = "Hello C++";

        std::cout << strlen(stack_str);
    }*/

    // strcpy_s
    /*{
        int size = 16;
        char* text = new char[size]{};
        
        strcpy_s(text, size, "Hello C++"); // "Hello C++" is const char*
        
        std::cout << text;
        
        delete[] text;
    }*/

    // strcpy_s vs strcpy
    /*{
        int size = 6;
        char* text = new char[size]{};
        
        //strcpy(text, "Hello C++"); // "Hello C++" is const char*
        strcpy_s(text, size, "Hello C++"); // "Hello C++" is const char*
        
        std::cout << text;
        
        delete[] text;
    }*/

    // string copy
    /*{
        char stack_str[16] = "Hello C++";

        int size = 16;
        char* heap_str = new char[size]{};

        strcpy_s(heap_str, size, stack_str); // "Hello C++" is const char*

        std::cout << heap_str;

        delete[] heap_str;
    }*/

    return 0;
}
