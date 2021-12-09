#include "ntoylapia.h"
#include "rafia.h"
#include "biblia.h"
#include <iostream>

using namespace std;
class bibliothiki
{
public:
	bibliothiki(int number); //constructor 
	~bibliothiki();  	//destructor
	void place_book(int number, biblia b);
	void take_book(int number);
	void print() const;
	void print(int number) const;
private:
	rafia f1,f2,f3;
	ntoylapia n1;
};