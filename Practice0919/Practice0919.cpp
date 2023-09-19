#include <iostream>


int* reallocate(int* data, int* capacity, int size)
{
    if (*capacity == size)
    {
        *capacity *= 2;

        int* new_data = new int[*capacity];

        for (int i = 0; i < size; ++i)
        {
            new_data[i] = data[i];
        }

        delete[] data;

        data = new_data;
    }

    return data;
}



int* append(int* data, int* capacity, int* size, int value)
{
    data = reallocate(data, capacity, *size);
    
    data[*size] = value;
    ++(*size);

    return data;
}

void print(int* arr, int size)
{
    std::cout << "{ ";

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i];

        if (i != size - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " }";
}

int main(int argc, char* argv[])
{
    int capacity = 4;
    int size = 0;

    int* arr = new int[capacity];
    
    arr = append(arr, &capacity, &size, 10);
    arr = append(arr, &capacity, &size, 42);
    arr = append(arr, &capacity, &size, 16);
    arr = append(arr, &capacity, &size, 32);
    arr = append(arr, &capacity, &size, 320);
    arr = append(arr, &capacity, &size, 322);
    arr = append(arr, &capacity, &size, 22);
    arr = append(arr, &capacity, &size, 541);
    arr = append(arr, &capacity, &size, 144);
    
    std::cout << "capacity = " << capacity << '\n';
    std::cout << "size = " << size << '\n';

    print(arr, size);

    std::cout << '\n';
    
    print(arr, capacity);

    delete[] arr;

    return 0;
}
