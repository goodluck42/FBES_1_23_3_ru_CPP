#pragma once
#include <iostream>

template <typename T>
struct Array
{
    T* data;
    int capacity;
    int size;
};

template <typename T>
void reallocate(Array<T>& array)
{
    if (array.capacity == array.size)
    {
        array.capacity *= 2;

        T* new_data = new T[array.capacity]{};

        for (int i = 0; i < array.size; ++i)
        {
            new_data[i] = array.data[i];
        }

        delete[] array.data;

        array.data = new_data;
    }
}

template <typename T>
void append(Array<T>& array, T value)
{
    reallocate(array);
    array.data[array.size] = value;
    ++array.size;
}

template <typename T>
Array<T> create()
{
    Array<T> arr;

    arr.capacity = 16;
    arr.data = new T[arr.capacity];
    arr.size = 0;

    return arr;
}

template <typename T>
void destroy(Array<T>& array)
{
    delete[] array.data;
}

template <typename T>
void bubble_sort(Array<T>& arr, bool (*compare)(T, T))
{
    for (int i = 0; i < arr.size - 1; ++i)
    {
        bool flag = false;
        
        for (int j = 0; j < arr.size - i - 1; ++j)
        {
            bool result = compare(arr.data[j], arr.data[j + 1]);

            if (result)
            {
                T temp = arr.data[j + 1];

                arr.data[j + 1] = arr.data[j];
                arr.data[j] = temp;

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
void print(Array<T>& arr)
{
    if (arr.size == 0)
    {
        std::cout << "{}";

        return;
    }

    std::cout << "{ ";

    for (int i = 0; i < arr.size; ++i)
    {
        std::cout << arr.data[i];

        if (i != arr.size - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " }";
}

void myprint();