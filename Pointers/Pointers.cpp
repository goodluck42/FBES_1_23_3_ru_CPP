#include <iostream>

void change(int* ptr)
{
    std::cout << "(change) ptr = " << ptr << '\n';

    *ptr *= 2;
    // *ptr = *ptr * 2;
}

int* foo()
{
    int* arr = new int[3]{1, 20, 42};
    
    return arr;
}

template <typename T>
void print(T* array, int size)
{
    if (size == 0)
    {
        return;
    }

    std::cout << '{';

    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i];

        if (i != size - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << '}';
}

int main(int argc, char* argv[])
{
    // {
    //     int v = 42;
    //
    //     int* ptr = &v; // address of
    //     *ptr = 80; // dereference
    //
    //     std::cout << v;
    // }

    /*{
        int v = 10;
        int* ptr = &v;

        std::cout << "(main) ptr = " << ptr << '\n';
        
        change(ptr);

        std::cout << v;
    }*/

    {
        // Image = 3MB;

        // int* ptr = new int;
        //
        // *ptr = 88;
        //
        // std::cout << "*ptr = " << *ptr << '\n';
        // std::cout << "sizeof(ptr) = " << sizeof(ptr) << '\n';
        //
        // delete ptr;

        // {
        //     int size = 3;
        //     int* arr2 = new int[size]{10, 20, 30}; // runtime
        //
        //     std::cout << *arr2 << '\n';
        //     std::cout << *(arr2 + 1) << '\n';
        //     std::cout << *(arr2 + 2) << '\n';
        //     
        //     delete[] arr2;
        //     // compile time
        //     //int arr[3] {10, 30, 11};
        // }
        // {
        //     int size; // size = 10
        //     
        //     std::cout << "Enter array size ->";
        //     std::cin >> size;
        //
        //     int* arr = new int[size]{};
        //
        //     delete[] arr;
        // }

        /*{
            int size = 5;
            int* arr2 = new int[size]{10, 20, 30, 42, 50};

            int* ptr = arr2 + 3;
            int* ptr2 = ptr - 2;
            
            std::cout << *ptr2 << '\n';
            std::cout << ptr[-2] << '\n';

            delete[] arr2;
        }*/
    }

    {
        int* result = foo();

        print<int>(result, 3);

        delete[] result;
    }
    
    return 0;
}