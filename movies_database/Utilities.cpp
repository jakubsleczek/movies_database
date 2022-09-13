#include "Utilities.h"

void mainMenu(Collections &movieBase){
    char optionCollections{'\0'};
    bool stop{false};
    while(!stop){
    std::cout<<"\n**********Main menu**********\n";
    std::cout<<"Choose your option: "<<std::endl;
    std::cout<<"1. - All movies display.\n2. - Genres display and select.\n3. - Add genre.\n4. - Exit.\n";
    std::cout<<"\nEnter your option (1-4): ";
    std::cin>>optionCollections;
    switch(optionCollections){
    case '1':
        movieBase.displayAll();
        getBack();
        break;
    case '2':
        movieBase.displaySelect();
        break;
    case '3':
        movieBase.addMovies();
        break;
    case '4':
        std::cout<<"Good Bye!"<<std::endl;
        stop=true;
        break;
    default:
         std::cout<<"Wrong command. Try again.\n"<<std::endl;
        }
    }
}

void getBack(){
    char toMain{'\0'};
    while(toMain != 'b'){
        std::cout<<"Type 'b' to get back ";
        std::cin>>toMain;
    }
}
