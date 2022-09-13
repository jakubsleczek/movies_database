#include "Movie.h"


void Movie::setWatched(){
    ++watched;
    };
std::string Movie::getName()const{
    return name;
    };
int Movie::getRating()const{
    return rating;
    };
int Movie::getWatched()const{
    return watched;
    };
Movie::Movie(std::string n, int r, int w)
    :name{n}, rating{r}, watched{w}{
    };
