#include  <iostream>

double sum(double a, double b)
{
    std::cout << "double sum(double a, double b)\n";

    return a + b;
}

// double sum(double a, double b, int c = 0)
// {
//     std::cout << "double sum(double a, double b, int c = 0)\n";
//
//     return a + b + c;
// }

int sum(int a, int b)
{
    std::cout << "int sum(int a, int b)\n";

    int res = a + b;

    return res;
}

double sum(double a, int b)
{
    std::cout << "double sum(double a, int b)\n";

    double res = a + b;

    return res;
}

double sum(int a, double b)
{
    std::cout << "double sum(int a, double b)\n";

    double res = a + b;

    return res;
}

int sum(int a, int b, int c)
{
    std::cout << "int sum(int a, int b, int c)\n";

    return a + b + c;
}

// non overloadeable
// char sum(int a, int b, int c)
// {
//     return a + b + c;
// }

constexpr int default_cols = 3;

void print_array(int array[], int size);
void print_array(double array[], int size);
void print_array(int array[][default_cols], int rows);

int main(int argc, char* argv[])
{
    // std::cout << sum(2.5, 3.99) << '\n';
    // std::cout << sum(2, 3) << '\n';
    // std::cout << sum(2.5, 3) << '\n';
    // std::cout << sum(2, 3.5) << '\n';
    // std::cout << sum(2, 3, 7) << '\n';


    /*{
        constexpr int size = 4;

        double arr[size]{1.2, 20.32, 30., 40.99};

        print_array(arr, size);
    }*/
    {
        constexpr int rows = 3;
        constexpr int cols = 3;
        
        int matrix[rows][cols]
        {
            {10, 20, 30},
            {31, 32, 33},
            {14, 42, 13},
        };

        print_array(matrix, rows);
    }

    return 0;
}

void print_array(int array[][default_cols], int rows)
{
    std::cout << "{\n";
    
    for (int i = 0; i < rows; ++i)
    {
        std::cout << '\t';
        print_array(array[i], default_cols);

        if (i != rows - 1)
        {
            std::cout << ',';
        }

        std::cout << '\n';
    }

    std::cout << '}';
}

void print_array(int array[], int size)
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

void print_array(double array[], int size)
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
