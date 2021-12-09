#include <iostream>
#include <stdlib.h> 
#include <time.h>

#include "bibliothiki.h"

using namespace std;

int main(int argc, char const *argv[])
{
	int K1,K2, NMax, L, random_number;

	srand (time(NULL));

	NMax = atoi(argv[1]);
	L = atoi(argv[2]);
	K1 = atoi(argv[3]);
	K2 = atoi(argv[4]);
	
	bibliothiki bibl(NMax);			//na dimioyrgei mia bibliothiki

	for (int i = 0; i < L; ++i){
		 biblia.b(creat_random_title(), creat_random_name(), creat_random_name())		//na dimioyrgei L biblia (isos ginei struct)
	}
	
	for(i = 0; i<K1; i++){			//k1 tyxaies topothetiseis
		random_number = rand() % 5 + 1;
		bibl.place_book(random_number, &b);
	}

	for(int i = 0; i < K2; i++){			//k2 tyxaies afaireseis
		random_number = rand() % 5 + 1;
		bibl.take_book(random_number);
	}

	bibl.print();					//ektyposh ths bibliothikis
	
	return 0;
}