#include <iostream>
#include "auth.h"
#include "menu.h"
#include "movies.h"

using namespace std;

int main()
{
    loadUsers();
    loadMovies();

    int choice;

    while(true) {
        cout << "._____ SIGN IN/UP _____." << endl;
        cout << "|                      |  " << endl;
        cout << "|      1) Login        |" << endl;
        cout << "|     2) Register      |" << endl;
        cout << "|    3) Admin Login    |" << endl;
        cout << "|      0) Exit         |" << endl;
        cout << "|                      |  " << endl;
        cout << ".----------------------." << endl;
        cout << "\nChoose: ";

        cin >> choice;

        if(choice == 1) {
            if (login()){
                showMenu();
            }
        }else if(choice == 2) {
            registerUser();
        }
        else if(choice == 3) {
            if (adminLogin()){
                adminMenu();
            }
        }else if(choice == 0){
            saveUsers();
            saveMovies();
            break;
        }
    }
}