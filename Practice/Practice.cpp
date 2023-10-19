#include <iostream>

int main(int argc, char* argv[])
{
    int* test = new int{10};

    std::cout << &test << '\n';
    
    int** ptr = &test;

    std::cout << ptr << '\n';

    int*** ptr_3d = &ptr;
    int**** ptr_4d = &ptr_3d;
    
    std::cout << ****ptr_4d; // int
    
    return 0;
}
