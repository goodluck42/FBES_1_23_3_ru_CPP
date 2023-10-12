#include <iostream>


struct MyStruct
{
    int data;
};

struct String
{
    char* data;
    int size;
    int capacity;
};

int main(int argc, char* argv[])
{
    // strlen() - получает длину строки
    // strcpy_s() - копирует одну строку в другую
    /*{
        char* arr = new char[32] {};

        strcpy_s(arr, 32, "C--");
    
        std::cout << arr;
    
        delete[] arr;
    }*/

    // 
    /*{
        char* str1 = new char[16]{};
        char* str2 = new char[16]{};

        strcpy_s(str1, 16, "hello"); // str1 = "Hello"
        strcpy_s(str2, 16, "Hello"); // str2 = "hello"

        std::cout << (void*)str1 << '\n';
        std::cout << (void*)str2 << '\n';

        // Сравнение адресов
        // {
        //     if (str1 == str2)
        //     {
        //         std::cout << "True";
        //     }
        //     else
        //     {
        //         std::cout << "False";
        //     }
        // }

        // Сравнение строк

        {
            // str1 = "Hello"
            // str2 = "Hello"
            
            // 0 = equals
            // 1 = str1 > str2
            // -1 = str1 < str2

            // strcmp - нечуствителен к регистру букв
            // strcmpi - нечуствителен к регистру букв
            
            if (_strcmpi(str1, str2) == 0)
            {
                std::cout << "equals" << '\n';
            }
            else
            {
                std::cout << "not equals" << '\n';
            }
        }

        delete[] str1;
        delete[] str2;
    }
    */

    // Конкатенация строк
    /*{
        char* str1 = new char[16]{};
        char* str2 = new char[16]{};

        // str1 = H e l l o   C + +
        strcpy_s(str1, 16, "Hello"); // str1 = "Hello"
        strcpy_s(str2, 16, " C++"); // str2 = "C++"

        strcat_s(str1, 16, str2); // str1 += str2


        std::cout << str1 << '\n';
        
        delete[] str1;
        delete[] str2;
    }*/

    /*{
        char* str1 = new char[32]{};

        strcpy_s(str1, 32, "Goodbye cruel world"); // str1 = "Goodbye cruel world"
        
        char* result = strchr(str1, 'x');

        if (result != nullptr)
        {
            *result = 'C';
        }
                
        std::cout << str1;
        
        delete[] str1;
    }*/


    /*{
        char* str1 = new char[32]{};

        strcpy_s(str1, 32, "Goodbye cruel world"); // str1 = "Goodbye cruel world"

        char* result = strstr(str1, "bye");

        if (result != nullptr)
        {
            std::cout << result;
        }

        delete[] str1;
    }*/

    // string to int algorithm
    /*{
        const char* str = "19";

        int digit1 = str[0] - 48; // 49 - 48 = 1
        int digit2 = str[1] - 48; // 57 - 48 = 9

        int result = digit1 * 10 + digit2;

        std::cout << result * 2 << '\n';
    }*/

    //ato*

    // {
    //     const char* str = "12.9";
    //
    //     double result = atof(str);
    //     
    //     std::cout << result * 2 << '\n';
    // }

    MyStruct s;

    s.data = 10;

    std::cout << s.data;


    return 0;
}
