#include <iostream>
#include <vector>

using std::vector;

struct Student
{
    char name[32];
    int age;
};

void append(Student** students, int size, Student* value)
{
    // reallocate()

    students[size++] = value;
}

void destroy(Student** students, int size)
{
    for (int i = 0; i < size; ++i)
    {
        delete students[i];
    }

    delete[] students;
}


int main(int argc, char* argv[])
{
    {
        Student* students = new Student[4]{};

        {
            Student* students_temp = new Student[8];

            for (int i = 0; i < 4; ++i)
            {
                students_temp[i] = students[i];
            }

            delete[] students;

            students = students_temp;
        }
    
        delete[] students;
    }
    struct Book
    {
        
    };

    Book** books = new Book*[10];
    
    {
        int size = 0;
        Student** students = new Student*[11];

        append(students, size, new Student);
        destroy(students, size);
    }
    
    return 0;
}
