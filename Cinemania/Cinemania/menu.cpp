#include <iostream>
#include "menu.h"
#include "movies.h"
#include "offers.h"
#include "snacks.h"

#include "static.h"
using namespace std;

void showMenu()
{
    clearScreen();

    int num;

    while(true){
        cout << R"(
 ________________________________________________________________________________________________________________
|                                                                                                                |
|                        _________ .__                                    .__                                    |
|                         \_   ___ \|__| ____   ____   _____ _____    ____ |__|____                              |
|                         /    \  \/|  |/    \_/ __ \ /     \\__  \  /    \|  \__  \                             |
|                         \     \___|  |   |  \  ___/|  Y Y  \/ __ \|   |  \  |/ __ \_                           |
|                          \______  /__|___|  /\___  >__|_|  (____  /___|  /__(____  /                           |
|                                 \/        \/     \/      \/     \/     \/        \/                            |
|                                                                                                                |
|                                 ////// -PRESS 1 TO VIEW THE MOVIE LIST- \\\\\\\                                |
|                                  ////// -PRESS 2 TO SEE OFFERS- \\\\\\\                                        |
|                                 ////// -PRESS 3 TO SEE THE SNACKS- \\\\\\\                                     |
|                                         //// -PRESS 0 TO LOGOUT- \\\\                                          |
|________________________________________________________________________________________________________________|
)";

    cout << "\nChoose: ";

        cin >> num;

            if(num == 1){
                showMovies();
            }
            else if(num == 2){
                showOffers();
            }
            else if(num == 3){
                showSnacks();
            }
            else if(num == 0){
                clearScreen();
                break;
            }
        }
    }


void adminMenu() {
    int choice;

    while (true) {

        cout << endl;
        cout << endl;
        cout << "._____ ADMIN MENU _____." << endl;
        cout << "|                      | " << endl;
        cout << "|      1) Add Movie    | " << endl;
        cout << "|     2) Delete Movie  | " << endl;
        cout << "|    3) Show Movies    | " << endl;
        cout << "|      0) Logout       | " << endl;
        cout << "|                      | " << endl;
        cout << ".----------------------." << endl;
        cout << "\nChoose: ";

        cin >> choice;

        if (choice == 1) addMovie();
        else if (choice == 2) deleteMovie();
        else if (choice == 3) showMovies();
        else if (choice == 0) clearScreen(); break;
    }
}