#include <iostream>

int main(int argc, char* argv[])
{
    // strcat_s
    /*{
        int size = 24;
        char* str1 = new char[size]{};
        char* str2 = new char[size / 2]{};

        strcpy_s(str1, size, "Hello "); // str1 = "Hello "
        strcpy_s(str2, size / 2, "C++"); // str2 = "C++"

        strcat_s(str1, size, str2);

        std::cout << str1 << '\n';

        delete[] str1;
        delete[] str2;
    }*/

    // strcmp & _strcmpi
    /*{
        char* str1 = new char[]{"Hello"};
        char* str2 = new char[]{"hELlo"};

        // 1: str1 > str2
        // -1: str1 < str2
        // 0: str1 == str2
        // int result = strcmp(str1, str2);

        // i = insensitive
        int result = _strcmpi(str1, str2);
        
        std::cout << result;
        
        delete[] str1;
        delete[] str2;
    }*/

    // strchr
    /*{
        char* str = new char[] {"C++ is the best language!"};
        char* result = strchr(str, 'l');

        if (result != nullptr)
        {
            std::cout << result;
        }
                
        delete[] str;
    }*/
    // strstr

    /*{
        {
            char* str = new char[] {"C++ is the best language!"};
            char* result = strstr(str, "best");

            if (result != nullptr)
            {
                std::cout << result;
            }
                
            delete[] str;
        }
    }*/

    // ato*
    /*{
        const char* str = "12.5";

        // int result = atoi(str);
        // long result = atol(str);
        // double result = atof(str);
        long long result = atoll(str);
        
        std::cout << result * 2 << '\n';
    }*/

    // memcpy
    /*{
        int size = 4;
        int* arr1 = new int[size]{10, 22, 42, 30};
        int* copy = new int[size * 2];

        memcpy(copy + 2, arr1, size * 2 * sizeof(int));

        for (int i = 0; i < size * 2; ++i)
        {
            std::cout << copy[i] << '\n';
        }
        delete[] arr1;
        delete[] copy;
    }*/

    // _strlwr_s & _strupr_s
    /*{
        char* text = new char[]{"Test"};

        //_strlwr_s(text, strlen(text) + 1);
        _strupr_s(text, strlen(text) + 1);

        std::cout << text;

        delete[] text;
    }*/

    // tolower & toupper
    /*{
        char c = 'A';
        //char result = std::toupper(c);
        char result = std::tolower(c);

        std::cout << result;
    }*/


    std::cout << '\n';
    system("pause");
}
