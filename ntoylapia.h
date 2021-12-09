#include <iostream>
#include "rafia.h"
#include "biblia.h"

using namespace std;
class ntoylapia
{
public:
	ntoylapia(int number); //constructor 
	~ntoylapia();  	//destructor
	void place_book(int number, biblia b);
	int take_book(int number);
	void print() const;
	void print(int number) const;
private:
	rafia f1,f2;
};
