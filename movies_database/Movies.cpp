#include "Movies.h"

void Movies::display()const{
    std::cout<<"**********"<<genre<<" movies**********"<<std::endl;
    for(const Movie &obj : collection){
        std::cout<<"\n"<<obj.name<<", rating: "<<obj.rating<<"/10, watched: "<<obj.watched<<" time(s)."<<std::endl;
    };
    std::cout<<"*****************************"<<std::endl;
};

void Movies::add(){
    std::cout<<"\nWrite a title of the movie: ";
    std::string n{""};
    //std::cin>>n;
    std::getline(std::cin>>std::ws,n);
    if(n=="")
        std::cout<<"Tu jest blad"<<std::endl;
    int count{0};
    for(const Movie &obj : this->collection){
        if(obj.name==n)
            ++count;
    };
    if(!count){
        std::cout<<"\nWrite a rate(1-10): ";
        int r;
        std::cin>>r;
        std::cout<<"\nWrite how many times you watched this movie: ";
        int w;
        std::cin>>w;
        Movie movie(n,r,w);
        this->collection.push_back(movie);
        }
    else
        std::cout<<"\nThis movie is in this collection already.";

}

void Movies::incrementWatched(){
    if(this->collection.size()){
        std::cout<<"\nWrite a title of the movie: ";
        std::string name;
        std::cin>> name;
        int count{0};
        for(Movie &obj : this->collection){
                if(obj.name == name){
                    obj.setWatched();
                    std::cout<<obj.getWatched()<<std::endl;;
                    ++count;
                    std::cout<<"\nMovie has been watched again!\n";
            };
        };
        if(!count)
                std::cout<<"\nNo such movie in your collection.\n";
    }
    else{
        std::cout<<"\nNo movie in this section.\n";
    }

};

Movies::Movies(std::string genre)
    :genre{genre}{
    std::cout<<"\nCollection created, genre: "<<genre<<std::endl;
};

Movies::Movies(const Movies &obj)
    :genre{obj.genre}, collection{obj.collection}{
    };
Movies::Movies(Movies &&obj)
    : genre{std::move(obj.genre)}, collection{std::move(collection)} {
    };

void Movies::menuMovies(){
    bool terminate{true};
    char optionMovies{'\0'};
    while(terminate){
    std::cout<<"\n**********"<<this->genre<<" genre menu**********\n";
    std::cout<<"1. - Collection display.\n2. - Add a movie.\n3. - Watched again.\n4. - Exit this genre.\n";
     std::cout<<"\nEnter your option (1-4): ";
    std::cin>>optionMovies;
    switch(optionMovies){
    case '1':
        this->display();
        break;
    case '2':
        this->add();
        break;
    case '3':
        this->incrementWatched();
        break;
    case '4':
        terminate=false;
        break;
    default:
        std::cout<<"Wrong command. Try again."<<std::endl;
        }
    }
}
