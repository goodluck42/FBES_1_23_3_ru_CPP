#pragma once
#include <iostream>

#include "User.h"

struct Db
{
    User* users;
};

void AddUserToDb(User* user);

void ShowUserCounterAddress_U();

void ShowSharedUserCounterAddress_U();

void SetUserCounter_U(int value);

void SetSharedUserCounter_U(int value);