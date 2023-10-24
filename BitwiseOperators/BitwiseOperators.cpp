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
