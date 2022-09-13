#ifndef _COLLECTIONS_H_
#define _COLLECTIONS_H_

#include "Movies.h"
#include "Movie.h"
#include <iostream>

class Collections{
private:
    std::vector<Movies> database;
public:
    void displaySelect();
    void displayAll()const;
    void addMovies();
    Collections()=default;
    ~Collections()=default;
};

#endif // _COLLECTIONS_H_
