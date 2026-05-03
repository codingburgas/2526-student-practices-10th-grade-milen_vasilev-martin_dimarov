#include <iostream>
#include "movies.h"

using namespace std;

vector<string> movies = {
    "Fast & Furious",
    "Need For Speed",
    "Transporter 2"
};

void showMovies() {
    cout << "\n==== MOVIES ====\n";

    for (int i = 0; i < movies.size(); i++) {
        cout << i + 1 << ". " << movies[i] << endl;
    }
}

void addMovie() {
    string name;

    cout << "Enter movie name: ";
    cin.ignore();
    getline(cin, name);

    movies.push_back(name);

    cout << "Movie added!\n";
}

void deleteMovie() {
    int index;

    showMovies();

    cout << "Enter movie number to delete: ";
    cin >> index;

    if (index > 0 && index <= movies.size()) {
        movies.erase(movies.begin() + index - 1);
        cout << "Movie deleted!\n";
    }
    else {
        cout << "Invalid number!\n";
    }
}