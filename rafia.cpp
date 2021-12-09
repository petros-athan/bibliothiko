#include "rafia.h"
#include <iostream>

using namespace std;

rafia::rafia(int number){
	
	n = number;
	capacity = new biblia[number];
	if (!capacity)  
		cout<<"den brike mnimi";
    
    cout<<"Constructing rafia"<<endl;
}

rafia::~rafia(){
	delete [] capacity;
	cout<< "destructor rafia"<<endl;
}

int rafia::place_book(biblia b){
	for (int i = 0; i < n; ++i){
		if (capacity[i] == NULL){
			capacity[i] = b;
			b.print();
			return 1;
		}
	}
	cout<< "den exei xoro to rafi"<< endl;
	return 0;
}

int rafia::take_book(){
	for (int i = 0; i < n; ++i)
		if (capacity [i] != NULL){
			capacity[i] = NULL;
			return 1; 
		}
	
	cout<< "to rafi einai adio"<< endl;
	return 0;
}
	
void rafia::print() const{
	for (int i = 0; i < n; ++i)
		cout <<capacity[i] <<" ";
	cout<<endl;
}