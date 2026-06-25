#include <iostream>
#include <vector>
#include <fstream>
#include "movies.h"
#include "static.h"

using namespace std;

vector<string> movies;

void loadMovies() {
    ifstream file("movies.txt");
    movies.clear();

    string line;
    while (getline(file, line)) {
        if (!line.empty()) movies.push_back(line);
    }

    file.close();
}

void saveMovies() {
    ofstream file("movies.txt");

    for (auto& m : movies) {
        file << m << "\n";
    }

    file.close();
}

void showMovies() {
    clearScreen();

    for (int i = 0; i < movies.size(); i++) {
        cout << i + 1 << ". " << movies[i] << "\n";
    }
}

void addMovie() {
    string name;

    cout << "Enter movie name: ";

    getline(cin >> ws, name);

    movies.push_back(name);
    saveMovies();

    cout << "Movie added!\n";
}

void deleteMovie() {
    int index;

    showMovies();

    cout << "Enter movie number to delete: ";
    cin >> index;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input!\n";
        return;
    }

    if (index > 0 && index <= movies.size()) {
        movies.erase(movies.begin() + index - 1);
        saveMovies();
        cout << "Movie deleted!\n";
    }
    else {
        cout << "Invalid number!\n";
    }
}