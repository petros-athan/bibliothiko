#include <iostream>
#include <string>

using namespace std;

class bibliothiki{
public:
	bibliothiki(); 					//constructor 
	~bibliothiki();  				//destructor
	void place_book(biblia bibl);
	biblia take_book(int number);
	void print() const;
private:
	biblia b[10];
}

struct biblia{
	string title;
	string name;
	int isbn;
}

int main(int argc, char const *argv[])
{
	int K1,K2, NMax;

	// NMax = atoi(argv[1]);
	// K1 = atoi(argv[2]);
	// K2 = atoi(argv[3]);
	
	bibliothiki bibl(NMax);		//na dimioyrgei mia bibliothiki
	
	biblia *b = new biblia[10];					//na dimioyrgei L biblia (isos ginei struct)
	
	for(i = 0; i<K1; i++){		//k1 tyxaies topothetiseis
		bibl.place_book();
	}

	for(i = 0; i<K2; i++){		//k2 tyxaies afaireseis
		bibl.take_book();
	}

	bibl.print();				//ektyposh ths bibliothikis
	
	return 0;
}


bibliothiki::bibliothiki(){
	cout<< "construct bibliyhikis"<<endl;
	for (int i = 0; i < 10; ++i)
		b[i] = NULL;
}

bibliothiki::~bibliothiki(){
	cout<< "destructor bibliyhikis"<<endl;
}

void bibliothiki::place_book(biblia bibl){
	int i = 0;
	while(b[i] < 10){
		if (b[i] == NULL)
			b[i] = bibl;
		else
			i++;
	}
}

biblia take_book(int number){
	biblia a;
	a = b[number];
	b[number] = NULL;
	return a;
}

void print(){
	int i = 0;
	while(b[i] != NULL){
		count<<b[i]<<endl;
		i++;
	}
}