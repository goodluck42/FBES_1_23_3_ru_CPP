#include <iostream>
#include <random>



int main(int argc, char* argv[])
{
    std::default_random_engine engine(time(0));

    std::uniform_int_distribution<int> range(10000, 99999);
    
    
    constexpr int size = 10000;
    
    int arr[size];

    for (int i = 0; i < size; ++i)
    {
        arr[i] = range(engine);
    }

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << '\n';
    }
    

    // Bubble Sort
    /*{
        // int a = 10;
        // int b = 20;
        // int temp = a;
        //
        // a = b;
        // b = temp;
        //
        // std::cout << a << ' ' << b << '\n';
        
        for (int i = 0; i < size; ++i)
        {
            for (int j = 0; j < size - i - 1; ++j)
            {
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];

                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < size; ++i)
        {
            std::cout << arr[i] << '\t';
        }

        std::cout << '\n';
    }*/

    // Selection Sort
    {
        for (int i = 0; i < size - 1; ++i)
        {
            int min = i;
            
            for (int j = i + 1; j < size; ++j)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }

            if (min != i)
            {
                int temp = arr[i];

                arr[i] = arr[min];
                arr[min] = temp;
            }
        }

        for (int i = 0; i < size; ++i)
        {
            std::cout << arr[i] << '\t';
        }

        std::cout << '\n';
    }

    // Insertion Sort
    /*{
        for (int i = 1; i < size; ++i)
        {
            int value = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > value)
            {
                arr[j + 1] = arr[j];
                --j;
            }

            arr[j + 1] = value;
        }

        for (int i = 0; i < size; ++i)
        {
            std::cout << arr[i] << '\t';
        }

        std::cout << '\n';
    }*/


    // Linear Search
    {
        int it = 0;
        int find;

        std::cout << "Enter value to find -> ";
        std::cin >> find;

        int last = -1;
        
        for (int i = 0; i < size; ++i)
        {
            ++it;
            if (arr[i] == find)
            {
                std::cout << "at " << i << " index" << '\n';
                break;
            }
        }

        std::cout << "iterations (linear search): " << it << '\n';
    }

    // Double Ended Search
    {
        int it = 0;
        
        int find;

        std::cout << "Enter value to find -> ";
        std::cin >> find;


        
        for (int i = 0, j = size - 1; i < j; ++i, --j)
        {
            ++it;
            if (arr[i] == find)
            {
                std::cout << "at " << i << " index" << '\n';
                break;
            }

            if (arr[j] == find)
            {
                std::cout << "at " << j << " index" << '\n';
                break;
            }
        }
        std::cout << "iterations (double ended search): " << it << '\n';
    }

    // Binary Search
    {
        int it = 0;
        
        int find;

        std::cout << "Enter value to find -> ";
        std::cin >> find;
        
        
        int l = 0;
        int r = size - 1;

        while (l <= r)
        {
            ++it;
            
            int m = l + (r - l) / 2;

            if (arr[m] == find)
            {
                std::cout << "at " << m << " index" << '\n';

                break;
            }

            if (arr[m] > find)
            {
                r = m - 1;
            }
            else // arr[m] < find
            {
                l = m + 1;
            }
        }

        std::cout << "iterations (binary search): " << it << '\n';
    }

    system("pause");
    return 0;
}
