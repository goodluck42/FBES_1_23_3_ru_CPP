#include <iostream>

void foo(int a)
{
    a = 15;
}

void foo(int* arr[])
{
    
}

int sum(int a, int b, int c)
{
    int result = a + b + c;

    return result;
}

int main(int argc, char* argv[])
{
    int ret = sum(10, 11, 12);

    std::cout << ret;

    
    return 0;
}
