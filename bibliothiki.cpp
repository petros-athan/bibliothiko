#include "bibliothiki.h"
#include <iostream>

using namespace std;

bibliothiki::bibliothiki(int number){
	f1(number);
	f2(number);
	f2(number);
	n1(number);
	cout<< "construct bibliyhikis"<<endl;

}

bibliothiki::~bibliothiki(){
	cout<< "destructor bibliyhikis"<<endl;

}

void bibliothiki::place_book(int number, biblia b){

	if (number == 1)
		if (f1.place_book(b))
			cout<<"placing book in top bookcase self"<<endl;
	else if(number == 2)
		if (f2.place_book(b))
			cout<<"placing book in middle bookcase self"<<endl;
	else if (number == 3)
		if(f3.place_book(b))
			cout<<"placing book in down bookcase self"<<endl;
	else if(number == 4)
		if(n1.place_book(number, b))
			cout<<"placing book in top closet self"<<endl;
	else if(number == 5)
		if (n1.place_book(number, b))
			cout<<"placing book in down closet self"<<endl;
}


void bibliothiki::take_book(int number){
	if (number == 1)
		if (f1.take_book())
			cout<<"taking book in top bookcase self"<<endl;
	else if(number == 2)
		if (f2.take_book()) 
			cout<<"taking book in middle bookcase self"<<endl;
	else if (number == 3)
		if (f3.take_book())
			cout<<"taking book in down bookcase self"<<endl; 
	else if(number == 4)
		if(n1.take_book(number))
			cout<<"taking book in top closet self"<<endl;
	else if(number == 5)
		if (n1.take_book(number))
			cout<<"taking book in down closet self"<<endl;
}

void bibliothiki::print(){
	cout<< endl<< "to pano rafi exei mesa ayta ta biblia: "<<endl;
	f1.print();
	cout<< endl<< "to meseo rafi exei mesa ayta ta biblia: "<<endl;
	f2.print();
	cout<< endl<< "to kato rafi exei mesa ayta ta biblia: "<<endl;
	f3.print();
	n1.print();
}

void bibliothiki::print(int number){
	if (number == 1){		
		cout<< endl<< "to pano rafi exei mesa ayta ta biblia: "<<endl;
		f1.print();
	}
	else if(number == 2){
		cout<< endl<< "to meseo rafi exei mesa ayta ta biblia: "<<endl;
		f2.print();
	}
	else if (number == 3){
		cout<< endl<< "to kato rafi exei mesa ayta ta biblia: "<<endl;
		f3.print();
	}
	else if((number == 4) || (number == 5))
		n1.print(number);
}