#include "ntoylapia.h"
#include <iostream>

using namespace std;

ntoylapia::ntoylapia(int number){
	f1(number);
	f2(number);
	cout<< "construct ntoylapia"<<endl;

}

ntoylapia::~ntoylapia(){
	cout<< "destructor ntoylapia"<<endl;

}

void ntoylapia::place_book(int number){
	if (number == 4)
		if (f1.place_book(b))
			cout<<"placing book in top closet self"<<endl;
	else if(number == 5)
		if (f2.place_book(b))
			cout<<"placing book in middle bookcase self"<<endl;
}


int  ntoylapia::take_book(int number){
	if (number == 1)
		return f1.take_book();
	else if(number == 2)
		return f2.take_book();
}

void ntoylapia::print(){
	cout<< endl<< "to pano rafi sto ntoylapi exei mesa ayta ta bibli a: "<< endl;
	f1.print();
	cout<< endl<< "to pkato rafi sto ntoylapi exei mesa ayta ta biblia: "<< endl;		
	f2.print();
}

void ntoylapia::print(int number){
	if (number == 1){
		cout<< endl<< "to pano rafi sto ntoylapi exei mesa ayta ta biblia: "<< endl;
		f1.print();
	}
	else if(number == 2){
		cout<< endl<< "to pkato rafi sto ntoylapi exei mesa ayta ta biblia: "<< endl;		
		f2.print();
	}
}