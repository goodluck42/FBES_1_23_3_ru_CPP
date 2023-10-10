#include <iostream>

template<typename T>
struct Array
{
    T* data;
    int size;
    int capacity;
};

template<typename T>
Array<T>* create_Array(int capacity = 16)
{
    Array<T>* arr = new Array<T>;
    
    arr->capacity = capacity;
    arr->size = 0;
    arr->data = new T[arr->capacity];

    return arr;
}

template<typename T>
void destroy_Array(Array<T>* arr)
{
    delete[] arr->data;
    delete arr;
}

template<typename T>
void reallocate_Array(Array<T>* arr)
{
    if (arr->size == arr->capacity)
    {
        arr->capacity *= 2;

        T* temp = new T[arr->capacity];

        // copy from arr->data to temp
        memcpy(temp, arr->data, arr->size * sizeof(T));

        delete[] arr->data;

        arr->data = temp;
    }
}

template<typename T>
void append(Array<T>* arr, T value)
{
    reallocate_Array(arr);
    arr->data[arr->size] = value;
    ++arr->size;
}

int* append(int* data, int* size, int* capacity, int value)
{
    if (*size == *capacity)
    {
        std::cout << "reallocated!" << '\n';

        *capacity *= 2;

        int* temp = new int[*capacity];

        for (int i = 0; i < *size; ++i)
        {
            temp[i] = data[i];
        }

        delete[] data;

        data = temp;
    }

    data[*size] = value;

    (*size)++;

    return data;
}

enum class Error
{
    HEAP_ERROR = 103,
    STACK_ERROR = 105,
    NO_ERROR = 0,
    CHAR_ERROR = '@',
};

struct Gpu
{
    int vram{};
    int bus{};
    int frequency{};
    char name[16]{};
};

// GOOD PRACTICE! VVV
void print(Gpu gpu)
{
    std::cout << "VRAM = " << gpu.vram << '\n';
    std::cout << "Bus = " << gpu.bus << '\n';
    std::cout << "Frequency = " << gpu.frequency << '\n';
    std::cout << "Name = " << gpu.name << '\n';
    std::cout << "\n\n";
}

// BAD PRACTICE! XXX
// void print(int vram, int bus, int frequency, char name[])
// {
//     
// }

template<typename T>
void print(Array<T>* arr)
{
    for (int i = 0; i < arr->size; ++i)
    {
        std::cout << arr->data[i] << '\n';
    }
}

int main(int argc, char* argv[])
{
    // Error type = Error::NO_ERROR;

    // int size = 3;
    // int* arr = new int[size] {10, 20, 30};
    //
    // arr = append(arr, &size, 40);
    //
    // for (int i = 0; i < size; ++i)
    // {
    //     std::cout << arr[i] << '\n';
    // }


    // {
    //     int capacity = 3;
    //     int size = 0;
    //
    //     int* arr = new int[capacity];
    //
    //     arr = append(arr, &size, &capacity, 10);
    //     arr = append(arr, &size, &capacity, 20);
    //     arr = append(arr, &size, &capacity, 30);
    //     arr = append(arr, &size, &capacity, 40);
    //     arr = append(arr, &size, &capacity, 50);
    //     arr = append(arr, &size, &capacity, 60);
    //     arr = append(arr, &size, &capacity, 70);
    //
    //
    //     for (int i = 0; i < size; ++i)
    //     {
    //         std::cout << arr[i] << '\n';
    //     }
    //     
    //
    //     std::cout << "size = " << size << '\n';
    //     std::cout << "capacity = " << capacity << '\n';
    //     
    //     delete[] arr;
    // }

    /*{
        Gpu gpu1;

        gpu1.vram = 16;
        gpu1.bus = 128;
        gpu1.frequency = 5600;
        memcpy(gpu1.name, "RTX 5080", 16);

        print(gpu1);

        Gpu gpu2{8, 256, 9700, "RTX 7009"};

        print(gpu2);

        Gpu gpu3{12, 192, 10200, "RTX -1109"};

        print(gpu3);
    }*/

    

    {
        Array<int>* arr = create_Array<int>(2);
    
        append(arr, 10);
        append(arr, 20);
        append(arr, 40);
        append(arr, 50);
        append(arr, 60);
        print(arr);
    
        std::cout << "arr->size: " << arr->size << '\n';
        std::cout << "arr->capacity: " << arr->capacity << '\n';
    
        destroy_Array(arr);
    }

    {
        Array<double>* arr = create_Array<double>();

        append(arr, 2.5);
        append(arr, 7.1);
        append(arr, 3.99);
        append(arr, 42.13);
        print(arr);
        destroy_Array(arr);
    }
    
    return 0;
}
