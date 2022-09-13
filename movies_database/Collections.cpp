#include "Collections.h"

void Collections::displayAll()const{
    if(!database.size()){
        std::cout<<"Your database is empty, press any key to continue."<<std::endl;;
    }
    else{
        std::cout<<"\n**********List of all movies you've added**********"<<std::endl;
        for(const Movies &movies : database){
            std::cout<<movies.genre<<" movies:"<<std::endl;
            for(const Movie &movie : movies.collection)  {
                std::cout<<"\n"<<movie.name<<", rating: "<<movie.rating<<"/10, watched: "<<movie.watched<<" time(s)."<<std::endl;
            }
            std::cout<<std::endl;
        }
        std::cout<<"***************************************************";
        std::cout<<std::endl;
    }
}

void Collections::displaySelect(){
    int no{0};
    if(database.size()){
        std::cout<<"\n**********List of added genres**********"<<std::endl;
        for(const Movies &collection : database){
            ++no;
            std::cout<<"["<<no<<"]: "<<collection.genre<<" movies"<<std::endl;
        }
        std::cout<<"****************************************"<<std::endl;
    }
    if(!database.size()){
        char hold{'\0'};
        std::cout<<"Your database is empty, press any key to continue.";
        std::cin>>hold;
    }
    else{
    int select;
    std::cout<<"Select a genre: ";
    std::cin>> select;
    while(select<1 || select>no){
        std::cout<<"Wrong option, try again."<<std::endl;
        std::cout<<"Select a genre: ";
        std::cin>> select;
    }
    this->database.at(select-1).menuMovies();
    }
}

void Collections::addMovies(){
    std::cout<<"Provide a name of your new collection: ";
    std::string name;
    std::cin>>name;
    Movies collection(name);
    database.push_back(collection);
}
