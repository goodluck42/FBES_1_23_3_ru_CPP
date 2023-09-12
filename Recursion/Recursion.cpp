#include <iostream>
void a();
void b();
void c();

void a()
{
    std::cout << "a" << '\n';
    b();
}

void b()
{
    int r = rand();
    
    std::cout << "b1" << '\n';
    c();
    std::cout << "b2" << '\n';
}

void c()
{
    std::cout << "c" << '\n';
}

void change(int a) // 0x60
{
    a += 10;
}

void print_stars(int count)
{
    if (count == 0)
    {
        return;
    }
    
    std::cout << '*';
    
    print_stars(count - 1);
}

long long factorial(int n) // n = 5
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

template<typename T>
int binary_search(T arr[], int size, T target, int l, int r)
{
    if (l <= r)
    {
        int m = l + (r - l) / 2;

        if (arr[m] == target)
        {
            return m;
        }

        if (arr[m] < target)
        {
            return binary_search(arr, size, target, m + 1, r);
        }

        return binary_search(arr, size, target, l, m - 1);
    }

    return -1;
}

// void f()
// {
//     static int count{};
//
//     count++;
//     
//     int arr[24];
//     
//     std::cout << count << '\n';
//     f();
// }

int main(int argc, char* argv[])
{
    // int value;
    // a();

    // print_stars(5);
    //
    // std::cout << '\n' << "end";

    // std::cout << factorial(5);

    constexpr int size = 10;
    
    int arr[size] {-5, -2, 0, 1, 2, 4, 5, 6, 7, 10};

    std::cout << binary_search(arr, size, -5, 0, size - 1);
    
    // int value = 10; // 0x90
    //
    // change(10);
    //
    // std::cout << value;
    
    return 0;
}
