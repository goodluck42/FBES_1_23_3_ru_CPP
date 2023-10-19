#include <iostream>
#include <random>

void foo(int** ptr)
{
    // ptr = int**
    // *ptr = int*
    // **ptr = int
    delete[] *ptr;
    std::cout << "void foo(): " << &ptr << '\n';
    *ptr = new int[3]{10, 20, 30}; // ptr = new int[] ...
}

int** create_2d_array(int rows, int cols)
{
    int** mdarr = new int*[rows];

    for (int i = 0; i < rows; i++)
    {
        mdarr[i] = new int[cols];
    }

    return mdarr;
}

void init_random_2d_array(int** mdarr, int rows, int cols)
{
    std::default_random_engine engine(time(0));
    std::uniform_int_distribution<int> range(10, 99);

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            mdarr[i][j] = range(engine);
        }
    }
}

void destroy_2d_array(int** mdarr, int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        delete[] mdarr[i];
    }

    delete[] mdarr;
}

void print(int** mdarr, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << mdarr[i][j] << '\t';
        }
        std::cout << '\n';
    }

    std::cout << '\n';
}

int main()
{
    // int* ptr = new int[3] {5, 10, 15};
    //
    // std::cout << "int main(): " << &ptr << '\n';
    //
    // foo(&ptr); // int** mptr = &ptr;
    //
    // std::cout << ptr[0] << '\n';
    // std::cout << ptr[1] << '\n';
    // std::cout << ptr[2] << '\n';
    //
    // delete[] ptr;


    // BAD PRACTICE!
    // int** mdarr = new int*[3];
    //
    // mdarr[0] = new int[3]{10, 20, 30}; // mdarr[0] = int*
    // mdarr[1] = new int[3]{40, 42, 50}; // mdarr[1] = int*
    // mdarr[2] = new int[3]{60, 70, 90}; // mdarr[2] = int*

    // std::cout << mdarr[0] << '\n';
    // std::cout << mdarr[1] << '\n';
    // std::cout << mdarr[2] << '\n';

    // delete[] mdarr[0];
    // delete[] mdarr[1];
    // delete[] mdarr[2];
    // delete[] mdarr;

    int rows = 3;
    int cols = 3;
    
    int** mdarr = create_2d_array(rows, cols);
    
    print(mdarr, rows, cols);

    destroy_2d_array(mdarr, 3);

    return 0;
}
