#include <iostream>
#include "ctor.h"
using namespace std;

Verbose::Verbose(){
	cout << "CTOR" << endl;
}


/*Verbose Verbose::factory(){
	Verbose v;
	return v;
}*/

Verbose::Verbose(const Verbose &v){
	cout << "COPY" << endl;
}


void Verbose::by_val(const Verbose v){}
void Verbose::by_ref(const Verbose & v ){}



Verbose::~Verbose(){
	cout << "DTOR" << endl;
}








