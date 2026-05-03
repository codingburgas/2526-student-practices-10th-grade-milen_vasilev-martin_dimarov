#pragma once
#include <string>

extern bool isAdmin;

void registerUser();
bool login();
bool adminLogin();

void loadUsers();
void saveUsers();