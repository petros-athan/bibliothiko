#include <iostream>
#include <string>
#include <time.h>

using namespace std;

class biblia
{
public:
	biblia(string new_title, string new_name, int new_isbn); //constructor 
	~biblia();  	//destructor
	void print();
private:
	string title;
	string name;
	int isbn;
};

string creat_random_title();
string creat_random_name();
int creat_random_isbn();

// struct biblia{
// 	string title;
// 	string name;
// 	int isbn;	
// };