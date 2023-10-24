// #include <iostream>
//
// void prepend(int**& mdarr, int& rows, int* arr)
// {
//     {
//         int** temp = new int*[rows + 1];
//
//         for (int i = 0; i < rows; ++i)
//         {
//             temp[i] = mdarr[i];
//         }
//
//
//         delete[] mdarr;
//         
//         mdarr = temp;
//         ++rows;
//     }
//
//     
//     for (int i = rows - 1; i > 0; --i)
//     {
//         mdarr[i] = mdarr[i - 1];
//     }
//     
//     mdarr[0] = arr;
// }
//
// int main(int argc, char* argv[])
// {
//
//     int rows = 3;
//     int cols = 2;
//     
//     int** mdarr = new int*[rows];
//
//     for (int i = 0; i < rows; ++i)
//     {
//         mdarr[i] = new int[cols] {10 + i, 20 + i};
//     }
//
//
//     int* arr = new int[2] {99, 42};
//     
//     prepend(mdarr, rows, arr);
//     
//     for (int i = 0; i < rows; ++i)
//     {
//         for (int j = 0; j < cols; ++j)
//         {
//             std::cout << mdarr[i][j] << '\t';
//         }
//
//         std::cout << '\n';
//     }
//
//     for (int i = 0; i < rows; ++i)
//     {
//         delete mdarr[i];
//     }
//
//     delete[] mdarr;
//     
//     return 0;
// }


#include <iostream>

bool a()
{
    printf("a");
    return true;
}

bool b()
{
    printf("b");
    return false;
}

char* encrypt(char* text, int key)
{
    int len = strlen(text);
    char* buffer = new char[len + 1]{};

    for (int i = 0; i < len; ++i)
    {
        buffer[i] = text[i] ^ key;
    }

    return buffer;
}

char* decrypt(char* text, int key)
{
    return encrypt(text, key);
}

int main()
{
    {
        // 11111111 = 1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 = 255
        // 00001010 = 0 + 2 + 0 + 8 = 10
        // 01010101 = 1 + 0 + 4 + 0 + 16 + 0 + 64 + 0 = 85

        // 42 / 2 = 21 / 2 = 10 / 2 = 5 / 2 = 2 / 2 = 1 / 2 = 1
        // 85 = 1010101
    }

    /*{
      if (a() & b())
      {
          std::cout << true;
      }
      else
      {
          std::cout << false;
      }
    }*/

    // | - bitwise OR
    /*{
        short a = 8792; // 00100010 01011000
        short b = 6311; // 00011000 10100111
        short result = a | b;
                        // 00111010 11111111

        std::cout << result << '\n';
    }*/

    // & - bitwise AND

    /*{
        short a = 4947; // 00010011 01010011
        short b = 9152; // 00100011 11000000
        short result = a & b;
                        // 00000011 01000000

        std::cout << result << '\n';
    }*/

    // ~ - bitwise inversion
    /*{
        short a = 1986;    // 00000111 11000010
        short result = ~a; // 1 1111000 00111101 = -32768 + 30781 = -1987
        // unsigned short result2 = ~a; // 1 1111000 00111101 = 32768 + 30781 = 63549

        std::cout << result;
    }*/

    // ^ - XOR
    /*{
        short a = 5799; // 00010110 10100111
        short b = 1945; // 00000111 10011001
        short result = a ^ b; // 00010001 00111110 (4414)

        std::cout << "result = " << result << '\n';

        // 00010001 00111110 (result)
        // 00010110 10100111 (a)
        // 00000111 10011001 (b)

        {
            char c = '#';
            int key = 389691;

            char encrypted = c ^ key;

            std::cout << "ecnrypted = " << encrypted << '\n';

            char decrypted = encrypted ^ key;

            std::cout << "decrypted = " << decrypted << '\n';
        }
    }*/
    /*{
        char text[] = "Having a good day. Programming C++";

        char* encrypted = encrypt(text, 1963);

        FILE* file;

        fopen_s(&file, "data.txt", "w");

        if (file == nullptr)
        {
            return -1;
        }
        
        
        for (int i = 0; i < USHRT_MAX; ++i)
        {
            char* decrypted = decrypt(encrypted, i);

            fprintf(file, "%d = %s\n", i, decrypted);

            delete[] decrypted;
        }
        
        fclose(file);

        delete[] encrypted;
        
    }*/

    // << - left shift
    /*{
        short a = 2023;         // 00000111 11100111
        short result = a << 2;  // 00011111 10011100

        std::cout << result;
    }*/

    // >> - right shift

    /*{
        short a = 2023;         // 00000111 11100111
        short result = a >> 2;  // 00000001 11111001

        std::cout << result;
    }*/

    // 
    /*{
        int value{}; // 00000000 00000000 00000000 00000000
        
        short a = 31655; // 01111011 10100111
        short b = 3169;  // 00001100 01100001

        value |= a; // 00000000 00000000 00000000 00000000
                    //                   01111011 10100111
                    // 00000000 00000000 01111011 10100111

        value <<= 16; // 01111011 10100111 00000000 00000000

        value |= b;  // 01111011 10100111 00000000 00000000
                     // 00000000 00000000 00001100 01100001
                     // 01111011 10100111 00001100 01100001 (value)

        std::cout << (short)value << '\n';
        std::cout << (short)(value >> 16) << '\n'; 
    }*/

    std::cout << '\n';
    system("pause");
}
