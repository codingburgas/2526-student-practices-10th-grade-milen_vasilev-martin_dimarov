#include <iostream>
#include "menu.h"
#include "movies.h"
#include "offers.h"
#include "snacks.h"

void showMenu() {
    std::cout << R"(
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
|                                                                                                                |
|                                  ////////// -PRESS 2 TO SEE OFFERS- \\\\\\\\\\                                 |
|                                                                                                                |
|                                 ////////// -PRESS 3 TO SEE THE SNACKS- \\\\\\\\\\                              |
|                                                                                                                |
|                                         //// -PRESS 0 TO ESCAPE- \\\\                                          |
|                                                                                                                |
|________________________________________________________________________________________________________________|
)";

    int num;
    std::cin >> num;

    if (num == 1) {
        showMovies();

    }
    else if (num == 2) {
        showOffers();
    }
    else if (num == 3) {
        showSnacks();
    }
    else{
        std::cout << "Wrong input!";
    }

 
}
