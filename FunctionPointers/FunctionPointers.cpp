#include <iostream>

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int mult(int a1, int b1)
{
    return a1 * b1;
}

int subtract(int a2, int b2)
{
    return a2 - b2;
}

//////////////////////////////
template <typename T>
struct Array
{
    T* data;
    int capacity;
    int size;
};

template <typename T>
void reallocate(Array<T>* array)
{
    if (array->capacity == array->size)
    {
        array->capacity *= 2;

        T* new_data = new T[array->capacity]{};

        for (int i = 0; i < array->size; ++i)
        {
            new_data[i] = array->data[i];
        }

        delete[] array->data;

        array->data = new_data;
    }
}

template <typename T>
void append(Array<T>* array, T value)
{
    reallocate(array);
    array->data[array->size] = value;
    ++array->size;
}

template <typename T>
Array<T>* create()
{
    Array<T>* arr = new Array<T>;

    arr->capacity = 16;
    arr->data = new T[arr->capacity];
    arr->size = 0;

    return arr;
}

template <typename T>
void destroy(Array<T>* array)
{
    delete[] array->data;
    delete array;
}

template <typename T>
void bubble_sort(Array<T>* arr, bool (*compare)(T, T))
{
    for (int i = 0; i < arr->size - 1; ++i)
    {
        bool flag = false;
        for (int j = 0; j < arr->size - i - 1; ++j)
        {
            bool result = compare(arr->data[j], arr->data[j + 1]);

            if (result)
            {
                T temp = arr->data[j + 1];

                arr->data[j + 1] = arr->data[j];
                arr->data[j] = temp;

                flag = true;
            }
        }

        if (!flag)
        {
            break;
        }
    }
}

template <typename T>
void print(Array<T>* arr)
{
    if (arr->size == 0)
    {
        std::cout << "{}";

        return;
    }

    std::cout << "{ ";

    for (int i = 0; i < arr->size; ++i)
    {
        std::cout << arr->data[i];

        if (i != arr->size - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " }";
}

///////////////////////////////

template <typename T>
bool less(T a, T b)
{
    return a < b;
}

template <typename T>
bool greater(T a, T b)
{
    return a > b;
}

// typedef unsigned long long uint64;
using uint64 = unsigned long long;
using operation = int(*)(int, int);

template <typename T>
using ptr = T*;

int main()
{
    {
        uint64 value = 102030LL;

        operation func = nullptr;

        // ptr<int> data = new int[64];
        // int* data2 = new int[64];

        int choice;

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            func = &add;
            break;
        case 2:
            func = &mult;
            break;
        case 3:
            func = &subtract;
        }

        if (func != nullptr)
        {
            std::cout << func(20, 5) << '\n';
        }
        
        


        int (*funcs[3])(int, int){&mult, &add, &subtract};

        // funcs[0] = &subtract;

        for (int i = 0; i < 3; ++i)
        {
            std::cout << funcs[i](20, 10) << '\n'; // mult(20, 10); add(20, 10); subtract(20, 10);
        }
    }

    // {
    //     bool(*func)(int, int) = &greater<int>;
    //
    //     Array<int>* arr = create<int>();
    //
    //     append(arr, 10);
    //     append(arr, 19);
    //     append(arr, 17);
    //     append(arr, 11);
    //     append(arr, 16);
    //
    //     
    //     bubble_sort(arr, &greater);
    //
    //     print(arr);
    //
    //     destroy(arr);
    // }
}
