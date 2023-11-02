#include "Db.h"

#include <iostream>

void AddUserToDb(User* user)
{
    // Adding user to database
}

void ShowUserCounterAddress_U()
{
    std::cout << "Db.cpp: " << &UserCounter << " (" << UserCounter << ")" << '\n';
}

void ShowSharedUserCounterAddress_U()
{
    std::cout << "Db.cpp: " << &SharedUserCounter << " (" << SharedUserCounter << ")" << '\n';
}

void SetUserCounter_U(int value)
{
    UserCounter = value;
}

void SetSharedUserCounter_U(int value)
{
    SharedUserCounter = value;
}