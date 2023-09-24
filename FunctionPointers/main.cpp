#include <iostream>


constexpr int size = 4;

void generate(int* arr, int p = 0)
{
    if (p == size)
    {
        return;
    }

    int r = rand() % 10;

    if (p == 0 && r == 0)
    {
        generate(arr, p);
        
        return;
    }
    
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == r)
        {
            generate(arr, p);
    
            return;
        }
    }

    arr[p] = r;

    generate(arr, p + 1);
}

void print(int* arr)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << ' ';
    }

    std::cout << '\n';
}

// int main(int argc, char* argv[])
// {
//     srand(time(0));
//
//     int i = 0;
//     while(i++ < 1000)
//     {
//         int arr[size];
//
//         generate(arr);
//
//         print(arr);
//
//         std::cout << "--------\n";
//     }
//     
//     return 0;
// }


