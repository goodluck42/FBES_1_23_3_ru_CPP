#include <iostream>
#include <random>

void change_ptr(int** ptr)
{
    *ptr = new int[4]{11, 12, 13, 14}; // ptr = 0xacc442
}

void change_ptr(int*& ptr)
{
    ptr = new int[4]{11, 12, 13, 14}; // ptr = 0xacc442
}

int** generate_mdarr(int rows, int cols)
{
    std::default_random_engine engine(time(0));
    std::uniform_int_distribution<int> range(10, 99);

    int** mdarr = new int*[rows]{};

    for (int i = 0; i < rows; ++i)
    {
        mdarr[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            mdarr[i][j] = range(engine);
        }
    }

    return mdarr;
}

void print_array(int* array, int size)
{
    if (size == 0)
    {
        std::cout << "{}";

        return;
    }

    std::cout << "{ ";

    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i];

        if (i != size - 1)
        {
            std::cout << ", ";
        }
    }

    std::cout << " }";
}

void print_array(int** array, int rows, int cols)
{
    std::cout << "{\n";
    for (int i = 0; i < rows; ++i)
    {
        std::cout << '\t';
        print_array(array[i], cols);

        if (i != rows - 1)
        {
            std::cout << ',';
        }

        std::cout << '\n';
    }
    std::cout << "}";
}

int main(int argc, char* argv[])
{
    /*{
        double* arr = new double[3]{2.5, 7.1, 4.2};
        double* copy = new double[6];

        memcpy(copy, arr, 3 * sizeof(double));

        std::cout << copy[0] << '\n';
        std::cout << copy[1] << '\n';
        std::cout << copy[2] << '\n';

        delete[] arr;
        delete[] copy;
    }*/

    /*{
        int a = 5;
        int* ptr = &a;
        int** ptr_ptr = &ptr;

        std::cout << **ptr_ptr;
    }*/

    /*{
        int* ptr = new int[3]{10, 20, 30}; // ptr = 0xf46fa
    
        change_ptr(ptr);
    
        std::cout << *ptr << '\n';
        std::cout << ptr[1] << '\n';
        std::cout << ptr[2] << '\n';
        std::cout << ptr[3] << '\n';
    
        delete[] ptr;
    }*/

    /*{
        int** mdarr = new int*[3]{}; // 24b

        mdarr[0] = new int[3]{10, 20, 30}; // int* = mdarr[0] // 12b
        mdarr[1] = new int[3]{40, 42, 50}; // 12b
        mdarr[2] = new int[3]{60, 70, 80}; // 12b

        std::cout << *(*(mdarr + 1) + 1) << '\n';
        std::cout << mdarr[1][1] << '\n';
    }*/

    {
        int rows = 3;
        int cols = 5;
        int** mdarr = generate_mdarr(rows, cols);

        print_array(mdarr, rows, cols);

        
    }

    std::cout << '\n';
    system("pause");
    return 0;
}
