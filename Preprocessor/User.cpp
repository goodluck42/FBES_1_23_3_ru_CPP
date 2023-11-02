#include "User.h"
#include <iostream>


int SharedUserCounter = 0;

User* CreateUser()
{
    ++UserCounter;
    
    return new User;
}

void DestroyUser(User* user)
{
    --UserCounter;
    
    delete user;
}

void ShowUserCounterAddress()
{
    std::cout << "User.cpp: " << &UserCounter << " (" << UserCounter << ")" << '\n';
}

void ShowSharedUserCounterAddress()
{
    std::cout << "User.cpp: " << &SharedUserCounter << " (" << SharedUserCounter << ")" << '\n';
}