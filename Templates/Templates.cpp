#include <iostream>
#include <random>

template <typename T> // T = int
T sum(T a, T b)
{
    T result = a + b;

    return result;
}

template <typename T1, typename T2> // T1 = double, T2 = int
auto sum(T1 a, T2 b)
{
    auto result = a + b;

    return result;
}

template <typename T>
void print(T array[], int size)
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

template <typename T>
T random()
{
    std::default_random_engine engine(time(0));
    std::uniform_int_distribution<T> range;

    return range(engine);
}

template <typename... Args>
auto my_sum(Args... args)
{
    return (args + ...); // return 1 + 2 + 3 + 3.5
}


void change(int arr[])
{
    arr[2] = 42;
}

int main(int argc, char* argv[])
{
    // {
    //     std::cout << sum<float>(2.5f, 3.f) << '\n';
    //
    //     std::cout << sum<int>(2, 3.5) << '\n';
    //
    //     std::cout << sum(20, 30) << '\n';
    //
    //     std::cout << sum('!', '$') << '\n';
    //
    //     std::cout << (char)sum<char, int>('a', 2) << '\n';
    //
    //     auto result = sum(1.5, 90L);
    //
    //     std::cout << result << '\n';
    //
    //     auto rnd = random<long>();
    //
    //     std::cout << my_sum(1, 2, 3, 3.5) << '\n';
    // }

    int arr[3] {10, 20, 30};
    
    change(arr);

    std::cout << arr[0] << '\n';
    std::cout << arr[1] << '\n';
    std::cout << arr[2] << '\n';
    
    return 0;
}
