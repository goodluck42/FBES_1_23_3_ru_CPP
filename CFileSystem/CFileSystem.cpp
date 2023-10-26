#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

int main(int argc, char* argv[])
{
    // r - read
    // w - write
    // a - append
    // b - binary (rb, wb, ab)


    // Write to file
    /*{
        FILE* file = std::fopen("data.txt", "w");
        
        // wchar_t s = L'@';
        // wchar_t str[32] = L"Hello C++";
        // const wchar_t* str2 = L"Goodbye Python";
        // wchar_t* str3 = new wchar_t[32];
        
        if (file != nullptr)
        {
            (void)std::fputs("Hello ", file);
            (void)std::fputc('C', file);
            (void)std::fputc('+', file);
            (void)std::fputc('+', file);

            (void)std::fclose(file);
        }
    }*/

    
    // Write to file UTF-8
    /*{
        FILE* file = std::fopen("data.txt", "w, ccs=utf-8");

        // utf-8, utf-16
        if (file != nullptr)
        {
            (void)std::fputws(L"こんにちは\n", file);
            (void)std::fputws(L"Hallo\n", file);
            (void)std::fputws(L"Cześć\n", file);
            (void)std::fputws(L"नमस्ते\n", file);
            (void)std::fputws(L"Привет\n", file);
            (void)std::fputws(L"Hello\n", file);
            (void)std::fputws(L"Salam\n", file);
            (void)std::fclose(file);
        }
    }*/

    // Read from file (UTF-8)
    {
        FILE* file = std::fopen("data.txt", "r, ccs=utf-8");
        FILE* out = std::fopen("out.txt", "w, ccs=utf-8");

        // utf-8, utf-16
        if (file != nullptr && out != nullptr)
        {

            (void)std::fseek(file, 17, SEEK_CUR);

            {
                wchar_t c1 = std::fgetwc(file);
                wchar_t c2 = std::fgetwc(file);
            
                std::cout << ftell(file) << '\n';

                (void)std::fwprintf(out, L"Character1: %lc\nCharacter2: %lc\n", c1, c2); // file wide print format
            }

            {
                int size = 256;
                wchar_t* buffer = new wchar_t[size];

                {
                    wchar_t* result = std::fgetws(buffer, size, file);

                    if (result != nullptr)
                    {
                        (void)std::fwprintf(out, L"First line: %ls", result);
                    }
                }

                {
                    wchar_t* result = std::fgetws(buffer, size, file);

                    if (result != nullptr)
                    {
                        (void)std::fwprintf(out, L"Second line: %ls", result);
                    }
                }
                
                delete[] buffer;
            }
            
            // Output to another file named out.txt (V1)
            // (void)std::fputwc(c1, out);
            // (void)std::fputwc(c2, out);

            // Output to another file named out.txt (V2)
            // %ls - wchar_t*
            // %lc - wchar_t
            
            (void)std::fclose(file);
            (void)std::fclose(out);
        }
    }
    
    return 0;
}
