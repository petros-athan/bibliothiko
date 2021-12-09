#include "biblia.h"
#include <iostream>

using namespace std;

biblia::biblia(string new_title, string new_name, int new_isbn){
    title = new_title;
    name = new_name;
    isbn = new_isbn;
    cout<<"ena neo biblio dimioyrgithike"<<endl;
}

biblia::~biblia(){
    cout<<"ena biblio katastrafike"<<endl;
}

void biblia::print(){
    cout<< "title: "<< title<< endl;
    cout<< "name: "<< name<< endl;
    cout<< "isbn: "<< isbn<< endl;
}



string creat_random_title(){
    srand (time(NULL));
    string[] rname = { "a","b", "c", "d","e", "f", "g", "h","i", "j", "k", "l", "m", "l", "n","o", "p", "q", "r", "s", "u", "t", "v", "w", "x", "y","z" };
    string name = "";
    for (int i = 0; i < 6; ++i)
        name += rname[rand()%12];

    return name;
}

string creat_random_name(){
    srand (time(NULL));
    string[] rname = { "a","b", "c", "d","e", "f", "g", "h","i", "j", "k", "l", "m", "l", "n","o", "p", "q", "r", "s", "u", "t", "v", "w", "x", "y","z" };
    string name = "";
    for (int i = 0; i < 15; ++i)
        name += rname[rand()%12];
    
    return name;
}

int creat_random_isbn(){
    rand (time(NULL));
    return rand() % 10000000000000;
}