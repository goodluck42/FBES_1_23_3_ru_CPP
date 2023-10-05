#include <iostream>

template <typename T>
struct Array
{
    T* memory;
    int size;
    int capacity;
};

struct String
{
    char* memory;
    int size;
    int capacity;
};

String create(const char* text)
{
    String str;

    str.capacity = strlen(text) + 1;
    str.size = str.capacity;
    str.memory = new char[str.capacity];

    strcpy_s(str.memory, str.capacity, text);

    return str;
}

void remove(String& str, char c)
{
    while (true)
    {
        int found = -1;

        for (int i = 0; i < str.size; ++i)
        {
            if (str.memory[i] == c)
            {
                found = i;
                break;
            }
        }

        if (found == -1)
        {
            break;
        }

        for (int i = found; i < str.size - 1; ++i)
        {
            str.memory[i] = str.memory[i + 1];
        }
    }
}



struct Object
{
};

template <typename T>
struct TObject
{
};

void f(Object&) { std::cout << "void f(Object&);"; }
void f(Object*) { std::cout << "void f(Object*);"; }
void f(int*) { std::cout << "void f(int*);"; }
void f(int&) { std::cout << "void f(int&);"; }
void f(const char*) { std::cout << "void f(const char*);"; }

template <typename T>
void t() { std::cout << "void t();"; }

template <typename T>
void t(T&) { std::cout << "void t(T&);"; }

template <typename T>
void t(T*) { std::cout << "void t(T*);"; }

template <typename T>
void s(TObject<T>&) { std::cout << "void s(TObject<T>&);"; }

template <typename T>
void s(TObject<T>*) { std::cout << "s(TObject<T>*);"; }


int main(int argc, char* argv[])
{
    // String s = create("hello world");
    //
    // remove(s, 'l');
    //
    // std::cout << s.memory;
    //
    // delete[] s.memory;

    return 0;
}
