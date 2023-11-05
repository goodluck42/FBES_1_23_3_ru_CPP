#ifndef USER_H
#define USER_H

struct User
{
    char* login;
    char* password;
};

User* CreateUser();
void DestroyUser(User* user);


#endif