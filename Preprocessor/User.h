#pragma once

static int UserCounter = 0;

extern int SharedUserCounter;

struct User
{
    char login[32];
    char password[32];
};

extern User* CreateUser();

extern void DestroyUser(User* user);

extern void ShowUserCounterAddress();


extern void ShowSharedUserCounterAddress();