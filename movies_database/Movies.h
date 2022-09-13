#ifndef _MOVIES_H_
#define _MOVIES_H_

#include<iostream>
#include<string>
#include<vector>
#include "Movie.h"
#include<string.h>

class Movies{
private:
    friend class Collections;
    std::string genre;
    std::vector<Movie> collection;
public:
    std::string getGenre();
    std::vector<Movie> getCollection();
    void display()const;
    void add();
    void incrementWatched();
    void menuMovies();

    Movies(std::string g);
    Movies(const Movies &obj);
    Movies(Movies &&obj);
    ~Movies()=default;

};

#endif // _MOVIES_

