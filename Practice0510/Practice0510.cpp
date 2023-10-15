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


void c()
{
    std::cout << "4" << "\n";
}

void b()
{
    std::cout << "3" << '\n';
    c();
    std::cout << "5" << "\n";
}

void a()
{
    std::cout << "1" << '\n';
    b();
    std::cout << "2" << '\n';
}


void append(String& str, const char* c_str)
{
    // Realloc

    int cap = str.size + strlen(c_str);
    char* mem = new char[cap];

    memcpy(mem, str.memory, str.size * sizeof(char));

    delete[] str.memory;

    str.memory = mem;

    strcat_s(str.memory, cap, c_str);
}


int main(int argc, char* argv[])
{
    String s = create("hello");

    append(s, " world");

    std::cout << s.memory;

    delete[] s.memory;


    // int size = 0;
    // int* ptr = &size;
    //
    // std::cout << &size << '\n';
    //
    // int capacity = 5;
    // int* arr = new int[capacity]{};
    //
    // arr[0] = 20;
    // ++size;
    //
    // arr[1] = 30;
    // ++size;
    //
    // arr[2] = 42;
    // ++size;
    //
    // arr[3] = 42;
    // ++size;
    //
    // arr[4] = 50;
    // ++size;
    //
    // for (int i = 0; i < size; ++i)
    // {
    //     std::cout << arr[i] << '\n';
    // }
    //
    // delete[] arr;


    const char* text = "foo123!@#4";

    int letters = 0;
    int digits = 0;
    int other = 0;
    
    count_all(text);
    
    return 0;
}
