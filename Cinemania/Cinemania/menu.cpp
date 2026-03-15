#include <iostream>
#include "menu.h"

#include "static.h"

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

    //this is just a test to see if linked correctly (will delete later)
    int result = add(3, 4);
    std::cout << "3 + 4 = " << result << std::endl;

    if (result == 7)
        std::cout << "StaticLib works!" << std::endl;

}
