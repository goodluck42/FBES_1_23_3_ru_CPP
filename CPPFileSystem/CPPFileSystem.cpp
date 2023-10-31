#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <sstream>

struct Metadata
{
    char type[8];
    int length;
};

int main(int argc, char* argv[])
{
    // Write
    /*{
        std::ofstream file; // output file stream

        file.open("data.txt");

        if (file.is_open()) // file != nullptr
        {
            file << std::boolalpha;
            file << "hello C++" << '\n';
            file << true << '\n';
            file << "こんにちは" << '\n';

            
            // std::ios::beg = SEEK_SET
            // std::ios::cur = SEEK_CUR
            // std::ios::end = SEEK_END
            file.seekp(12, std::ios::beg);

            file << 42;
            
            std::cout << file.tellp() << '\n';

            file.flush();
            file.close();
        }
    }*/

    // Read
    //     {
    //         std::ifstream file("data.txt");
    //
    //         if (file.is_open())
    //         {
    //
    //             // Read a single line
    //             /*{
    //                 char* buffer = new char[256]{};
    //
    //                 file.getline(buffer, 256);
    //
    //                 std::cout << buffer;
    //
    //                 delete[] buffer;
    //             }*/
    //
    //             // Variant 2
    //             /*{
    //                 std::string line;
    //             
    //                 std::getline(file, line); // file >> line;
    //
    //                 std::cout << line;
    //             }*/
    //
    //             // Read all lines
    //             
    //             /*{
    //                 char* buffer = new char[256]{};
    //             
    //                 while(!file.eof())
    //                 {
    //                     file.getline(buffer, 256);
    //
    //                     std::cout << buffer << '\n';
    //                 }
    //             }*/
    //             // Read a single in from a file
    //             /*{
    //                 int value;
    //                 
    //                 file >> value;
    //
    //                 std::cout << value << '\n';
    //             }*/
    //             
    //             file.close();
    //         }
    //
    //         
    //     }

    // Read & Write
    /*{
        std::fstream file;

        // std::ios::out - write to file
        // std::ios::in - read from file
        // std::ios::binary - binary mode
        // std::ios::app - binary mode
        
        file.open("data.txt", std::ios::out | std::ios::in | std::ios::binary);

        if (file.is_open())
        {
            file << "Hello C++" << '\n';

            file.flush();

            file.seekg(0, std::ios::beg);
            
            std::cout << "put: " << file.tellp() << '\n';
            std::cout << "get: " << file.tellg() << '\n';
                        
            const int length = 1024;
            char* buffer = new char[length]{};
            
            file.getline(buffer, length);
            
            std::cout << buffer;
            
            delete[] buffer;
            
            file.close();
        }
    }*/

    // Write binary
    /*{
        std::fstream file;

        file.open("data.bin", std::ios::out | std::ios::binary);

        if (file.is_open())
        {
            int length = 5;
            Metadata metadata{"int32", length};

            int* arr = new int[length]
            {
                10, 20, 30, 40, 42
            };

            file.write((char*)&metadata, sizeof(Metadata)); // write metadata
            file.write((char*)arr, sizeof(int) * length);
            
            delete[] arr;
            file.close();
        }
    }*/

    // Read binary
    {
        std::fstream file;
        file.open("data.bin", std::ios::in | std::ios::binary);

        if (file.is_open())
        {
            Metadata metadata;

            file.read((char*)&metadata, sizeof(Metadata));

            std::cout << metadata.length << '\n';
            std::cout << metadata.type << '\n';

            if (std::strcmp(metadata.type, "int32") == 0)
            {
                int* arr = new int[metadata.length];

                file.read((char*)arr, sizeof(int) * metadata.length);

                for (int i = 0; i < metadata.length; ++i)
                {
                    std::cout << arr[i] << '\n';
                }

                delete[] arr;
            }
            
            file.close();
        }
    }

    return 0;
}
