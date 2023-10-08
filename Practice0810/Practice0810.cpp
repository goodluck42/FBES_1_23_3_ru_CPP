#include <iostream>

void f(int* ptr)
{
    std::cout << "f(): " << ptr << '\n';
    //ptr = new int{10};

    *ptr = 10;
}

void print_string(const char* text)
{
    // int i = 0;
    //
    // while (text[i] != '\0')
    // {
    //     std::cout << text[i];
    //     ++i;
    // }

    int len = strlen(text);
    
    for (int i = 0; i < len; ++i)
    {
        std::cout << text[i];
    }
}

int main(int argc, char* argv[])
{
    // int* ptr = new int{5};
    //
    // std::cout << "main(): " << ptr << '\n';
    //
    // f(ptr);
    //
    // std::cout << *ptr << '\n';

    /*{
        int a = 10;
        int* ptr = &a;
    
        std::cout << ptr << '\n';
        std::cout << &ptr << '\n';
    
        f(ptr);
    }*/

    /*{
        short* ptr = new short[3] {10, 20, 30};

        std::cout << ptr[0] << '\n';
        std::cout << *ptr << '\n';
        
        std::cout << ptr[1] << '\n';
        std::cout << *(ptr + 1) << '\n';

        std::cout << ptr[2] << '\n';
        std::cout << *(ptr + 2) << '\n';
        
        // std::cout << ptr << '\n';
        // std::cout << ++ptr << '\n';
        //
        // std::cout << *ptr;
        
        delete[] ptr;
    }*/

    // {
    //     int a = 42;
    //     int b(42);
    //     int c{}; // c = 0;
    //     int d{42}; // d = 42;
    //     int e = {42};
    // }

    // int* ptr = new int[3] {10, 11, 12};
    //
    // ptr++;
    //
    // std::cout << *ptr;
    //
    // delete[] ptr;

    // {
    //     // if (0.1 + 0.2 == 0.3)
    //     // {
    //     //     std::cout << "equals";
    //     // }
    //     // else
    //     // {
    //     //     std::cout << "not equals";
    //     // }
    //
    //     int a = 5;
    //     int& ref = a;
    //
    //     std::cout << &a << '\n';
    //     std::cout << &ref << '\n';
    //     
    //     // const char* text = "hello";
    //     //
    //     // std::cout << sizeof(text) << '\n';
    //     // std::cout << sizeof("hello") << '\n';
    // }

    /*{
        const char* str = "C++ is better than Python"; // immutable string

        // str[0] = 'c';
        
        char text[16] = "Hello"; // mutable string

        text[0] = 'h';
    }*/

    // strcpy_s
    /*{
        int size = 32;

        char* str = new char[size]{};
        
        strcpy_s(str, size, "Hello C++"); // str = "Hello C++"

        print_string(str);

        delete[] str;
    }*/

    // strlen
    /*{
        int size = 128;

        char* str = new char[size]{};

        std::cin.getline(str, size);

        std::cout << strlen(str) << '\n';

        delete[] str;
    }*/

    // toupper
    {
        char c = 'a';

        char result = std::toupper(c);

        std::cout << result << '\n';
    }

    // tolower
    {
        char c = 'Q';

        char result = std::tolower(c);

        std::cout << result << '\n';
    }



    // Task1
    // input: hello. how are you?
    // output: Hello. How are you?

    // Task2 & Task3
    // input: hello
    // output:
    // a = 0
    // b = 0
    // c = 0
    // d = 0
    // e = 1
    //...
    // l = 2
    // ...
    // h = 1
    // o = 1
    // ...
    // z = 0
    
    
    return 0;
}
