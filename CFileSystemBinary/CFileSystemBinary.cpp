#define _CRT_SECURE_NO_WARNINGS
#include <complex>
#include <iostream>


// const int size = 5;
// int arr[5] {1, 2, 3, 4, 5};
//
// for (int i = 0; i < size / 2; ++i)
// {
//     int temp = arr[i];
//
//     arr[i] = arr[size - i - 1];
//     arr[size - i - 1] = temp;
// }
//
// for (int i = 0; i < size; ++i)
// {
//     std::cout << arr[i] << '\n';
// }


// int8;
// int16;
// int32;
// uint64;
// double;
// float;

struct Metadata
{
    char type[8];
    int size;
};

template <typename T>
T* shift(void* memory, int offset)
{
    char* data = (char*)memory;

    data += offset;

    return (T*)data;
}


int main(int argc, char* argv[])
{
    /*{
        void* memory = ::operator new(13); // malloc(13)

        {
            int* first = shift<int>(memory, 0);

            std::cout << memory << '\n';
            std::cout << first << '\n';
        
            *first = 42;
        }

        {
            char* second = shift<char>(memory, sizeof(int));

            *second = '@';
        }

        {
            double* third = shift<double>(memory, 5);

            *third = 52.31;
        }
    
        int* first = shift<int>(memory, 0);
        char* second = shift<char>(memory, 4);
        double* third = shift<double>(memory, 5);
    
        std::cout << *first << '\n';
        std::cout << *second << '\n';
        std::cout << *third << '\n';

    
        ::operator delete(memory); // free(memory)
    }*/

    /*Write a single int to binary file
    {
        FILE* file = std::fopen("data.bin", "wb");
    
        if (file == nullptr)
        {
            return -1;
        }
    
        int value;
    
        std::cout << "Enter a value ->";
    
        std::cin >> value;// 2031465432
    
        int* ptr = &value;
    
        (void)std::fwrite(ptr, sizeof(int), 1, file);
        (void)std::fclose(file);
    } */

    // Read a single int from binary file

    /*{
        FILE* file = std::fopen("data.bin", "rb");

        if (file == nullptr)
        {
            return -1;
        }

        int value;
        
        (void)std::fread(&value, sizeof(int), 1, file);

        std::cout << value;

        (void)std::fclose(file);
    }*/


    // Write an int array to binary file (5 elements)
    /*{
        FILE* file = std::fopen("data.bin", "wb");

        if (file == nullptr)
        {
            return -1;
        }
        
        int size = 5;
        int* arr = new int[size]{10, 15, 20, 25, 42};
        
        (void)std::fwrite(arr, sizeof(int), size, file);
        (void)std::fclose(file);

        delete[] arr;
    }*/

    // Read an int array from binary file (5 elements)
    /*{
        {
            FILE* file = std::fopen("data.bin", "rb");

            if (file == nullptr)
            {
                return -1;
            }
            int size = 5;
            int* arr = new int[size];
        
            (void)std::fread(arr, sizeof(int), size, file);

            for (int i = 0; i < size; ++i)
            {
                std::cout << arr[i] << '\n';
            }
            
            (void)std::fclose(file);

            delete[] arr;
        }
    }*/

    /*{
        FILE* file = std::fopen("data.bin", "wb");

        if (file == nullptr)
        {
            return -1;
        }

        // User input
        int size;

        std::cout << "Enter array size - > ";
        std::cin >> size;

        double* arr = new double[size];

        for (int i = 0; i < size; ++i)
        {
            std::cin >> arr[i];
        }

        // Writing data

        Metadata metadata{"double", size};

        (void)std::fwrite(&metadata, sizeof(Metadata), 1, file);
        (void)std::fwrite(arr, sizeof(double), size, file);

        delete[] arr;
        (void)std::fclose(file);
    }*/

    /*{
        FILE* file = std::fopen("data.bin", "rb");

        if (file == nullptr)
        {
            return -1;
        }

        Metadata metadata;

        (void)std::fread(&metadata, sizeof(Metadata), 1, file);

        std::cout << metadata.size << '\n';
        std::cout << metadata.type << '\n';

        if (std::strcmp(metadata.type, "double") == 0)
        {
            double* arr = new double[metadata.size];

            (void)std::fread(arr, sizeof(double), metadata.size, file);

            for (int i = 0; i < metadata.size; ++i)
            {
                std::cout << arr[i] << '\n';
            }

            delete[] arr;
        }
        else if (std::strcmp(metadata.type, "int") == 0)
        {
            int* arr = new int[metadata.size];

            //...

            delete[] arr;
        }


        (void)std::fclose(file);
    }*/

    

    // 525690
    // fputc
    // fputs
    // fputws
    // fputwc
    // fprintf
    // fwprintf
    
    // fgets
    // fgetc
    // fgetwc
    // fgetws
    // 
    
    return 0;
}
