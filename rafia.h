#include <iostream>
#include "biblia.h"

using namespace std;
class rafia
{
public:
	rafia(int number); //constructor 
	~rafia();  	//destructor
	int place_book(biblia b);
	int take_book();
	void print() const;
private:
	biblia *capacity;
	int n;
};