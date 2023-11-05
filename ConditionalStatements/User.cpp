#include "User.h"


User* CreateUser()
{
    return new User;
}

void DestroyUser(User* user)
{
    delete user;
}