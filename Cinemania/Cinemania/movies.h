#pragma once
#include <vector>
#include <string>

using namespace std;

extern vector<string> movies;

void showMovies();
void addMovie();
void deleteMovie();

void loadMovies();
void saveMovies();