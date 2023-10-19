#include <iostream>

struct A
{
    double c; // 8 of 8*
    int a; // 4 of 8*
    char a2; // 5 of 8
    char b; // 6 of 8
};

struct B
{
    char c; // 1 of 8*
    double b; // 8 of 8*
    int a; // 4 of 8*
    short x; // 6 of 8
    bool* d; // 8 of 8*
};

struct C
{
    int c;
    char x[12];
};

struct D
{
    char a;
    char* arr[32];
};

struct X
{
    int a; // 4 of 8*
    double b; // 8 of 8*
    short c; // 2 of 8*
    int d; // 6 of 8
    char x; // 7 of 8
};

struct Data
{
    long a;
    char b;
    char text[32];
};

struct StrangeArray
{
    int a;
    int b;
    int c;
    int d;
};

struct Inner // 16b
{
    double a;
    char b;
};

struct Outer
{
    int a; // 4 of 8*
    char b; // 5 of 8
    int c; // 4 of 8*
    Inner inner; // 8 of 8* + 8 of 8*
};





struct Student // 16b
{
    char* name;
    int age;
};

struct Audience
{
    int number; // 4 of 8
    Student students[3]; // 16b * 3
};

int main(int argc, char* argv[])
{
    /*{
        Data my_super_variable;

        my_super_variable.a = 19000;
        my_super_variable.b = '@';
        strcpy_s(my_super_variable.text, 32, "Hello C++");
        long* long_addr = (long*)&my_super_variable;
        char* char_addr = (char*)((char*)&my_super_variable + 4);
        char* text_addr = (char*)((char*)&my_super_variable + 5);
    
        std::cout << *long_addr << '\n';
        std::cout << *char_addr << '\n';
        std::cout << text_addr << '\n';
    }*/


    /*{
        StrangeArray arr;

        arr.a = 10;
        arr.b = 20;
        arr.c = 30;
        arr.d = 40;

        int* data = (int*)&arr;

        for (int i = 0; i < 4; ++i)
        {
            std::cout << data + i << " = "  << data[i] << '\n';
        }
    }*/


    Audience aud;

    aud.students[0].age = 10;

    aud->students[0].age = 10;
    
    //aud->students[0].name = 10;
    
    return 0;
}
