#include <iostream>

constexpr int default_value = 1;

int sum(int a, int b)
{
    int result = a + b;

    return result;
}

double mydiv(int a, int b = default_value)
{
    return (double)a / b;
}

void print_array(int array[], int size); // function prototype / function declaration

int main(int argc, char* argv[])
{
    int a;
    // {
    //     for (int i = 0; i < argc; ++i)
    //     {
    //         std::cout << argv[i] << '\n';
    //     }
    // }

    /*{
        int a;
        int b;

        std::cin >> a >> b;
    
        double res = mydiv(a, b);
    
        std::cout << res;
    }*/
    // system("pause");

    constexpr int size = 9;

    int arr[size]{10, 20, 30, 42, 90, 13, 90, 100, 120};

    print_array(arr, size);

    return 0;
}

void print_array(int array[], int size) // function definition
{
    // { 10, 20, 30, 42, 90, 13 }
    // [10, 20, 30, 42, 90, 13]
    // (10, 20, 30, 42, 90, 13)
        
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
