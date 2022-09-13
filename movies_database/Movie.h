#ifndef _MOVIE_H_
#define _MOVIE_H_

#include<iostream>
#include<string>


class Movie{
private:
    friend class Movies;
    friend class Collections;
    std::string name;
    int rating;
    int watched;
public:
    void setWatched();
    int getRating() const;
    int getWatched() const;
    std::string getName() const;
    Movie(std::string n, int r, int w);
    ~Movie()=default;
};

#endif // _MOVIE_
