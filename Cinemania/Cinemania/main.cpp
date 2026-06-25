#include <iostream>
#include "auth.h"
#include "menu.h"
#include "movies.h"

using namespace std;

int main() {

    loadUsers();
    loadMovies();

    int choice;

    while (true) {
        cout << "\n----- SIGN IN/UP -----\n";
        cout << "1) Login\n";
        cout << "2) Register\n";
        cout << "3) Admin Login\n";
        cout << "4) Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            if (login()) showMenu();
        }
        else if (choice == 2) {
            registerUser();
        }
        else if (choice == 3) {
            if (adminLogin()) adminMenu();
        }
        else if (choice == 4) {
            saveUsers();
            saveMovies();
            break;
        }
    }
}