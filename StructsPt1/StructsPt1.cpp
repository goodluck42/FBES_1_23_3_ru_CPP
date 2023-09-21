#include <iostream>

struct Gpu
{
    int vram;
    float frequency;
    int bus;
};

void foo(Gpu* gp)
{
    //(*gp).vram *= 2;
    gp->vram *= 2;
}

void print(Gpu gp)
{
    std::cout << "vram = " << gp.vram << '\n';
    std::cout << "bus = " << gp.bus << '\n';
    std::cout << "frequency = " << gp.frequency << '\n';
}

template <typename T>
struct Array
{
    T* data; // int* data;
    int size;
    int capacity;
};

template <typename T>
Array<T>* create()
{
    Array<T>* arr = new Array<T>;

    arr->capacity = 16;
    arr->data = new T[arr->capacity];
    arr->size = 0;

    return arr;
}

template<typename T>
void destroy(Array<T>* arr)
{
    delete[] arr->data;
    delete arr;
}

template<typename T>
void reallocate(Array<T>* arr)
{
    if (arr->capacity == arr->size)
    {
        arr->capacity *= 2;

        T* new_data = new T[arr->capacity];

        for (int i = 0; i < arr->size; ++i)
        {
            new_data[i] = arr->data[i]; // T*
        }

        delete[] arr->data;

        arr->data = new_data;
    }
}

template <typename T>
void append(Array<T>* arr, T value)
{
    reallocate(arr);
    
    arr->data[arr->size] = value;
    ++arr->size;
}

template <typename T>
void print(Array<T>* arr)
{
    if (arr->size == 0)
    {
        std::cout << "{ }";

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

int main(int argc, char* argv[])
{
    /*Gpu gp1;
    
    gp1.bus = 128;
    gp1.frequency = 2.4f;
    gp1.vram = 12;

    foo(&gp1);

    print(gp1);
    */
    
    Array<int>* arr = create<int>(); // arr = []
    
    append(arr, 10); // arr.append(10)
    append(arr, 11); // arr.append(11)
    append(arr, 15); // arr.append(15)
    append(arr, 42); // arr.append(42)

    print(arr); // print(arr)

    destroy(arr);

    return 0;
}
