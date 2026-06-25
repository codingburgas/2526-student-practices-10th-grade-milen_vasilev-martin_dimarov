#include <iostream>
#include <vector>
#include <fstream>
#include "auth.h"

#include "static.h"
using namespace std;

bool isAdmin = false;

struct User {
    string username;
    string password;
    bool admin;
};

vector<User> users;

void loadUsers() {
    ifstream file("users.txt");
    users.clear();

    User u;
    while (file >> u.username >> u.password >> u.admin) {
        users.push_back(u);
    }

    file.close();
}

void saveUsers() {
    ofstream file("users.txt");

    for (auto& u : users) {
        file << u.username << " " << u.password << " " << u.admin << "\n";
    }

    file.close();
}
bool login() {
    string username, password;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    for (auto& u : users) {
        if (u.username == username && u.password == password) {
            isAdmin = u.admin;
            cout << "Login successful!\n";
            return true;
        }
    }
    clearScreen();

    cout << "_____________. " << endl;
    cout << "Wrong login! |" << endl;
    cout << "-------------." << endl;
    cout << endl;
    cout << endl;

    return false;
}

bool adminLogin() {
    string username, password;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    if (username == "admin" && password == "admin123") {
        isAdmin = true;
        clearScreen();

        cout << "________________________. " << endl;
        cout << "Admin login successful! |"<< endl;
        cout << "------------------------." << endl;

        return true;
    }

    clearScreen();

    cout << "_________________________. " << endl;
    cout << "Wrong admin credentials! | " << endl;;
    cout << "-------------------------. " << endl;
    cout << endl;
    cout << endl;

    return false;
}

void registerUser() {
    string username, password;

    cout << "Username: ";
    cin >> username;

    cout << "Password: ";
    cin >> password;

    for(auto& u : users){
        if(u.username == username){
            clearScreen();

            cout << "________________________. " << endl;
            cout << "Username already taken! |" << endl;
            cout << "------------------------." << endl;
            cout << endl;
            cout << endl;
            return;
        }
    }

    users.push_back({ username, password, false });
    saveUsers();

    clearScreen();

    cout << "_________________________. " << endl;
    cout << "Registration successful! |" << endl;
    cout << "-------------------------." << endl;
    cout << endl;
    cout << endl;
}