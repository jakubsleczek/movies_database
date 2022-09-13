#include<iostream>
#include "Movie.h"
#include "Movies.h"
#include "Collections.h"
#include "Utilities.h"


int main(){
std::cout<<"Welcome in your movies database\n\n"<<std::endl;
Collections movieBase;
mainMenu(movieBase);
return 0;
};


