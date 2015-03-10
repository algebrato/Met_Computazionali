#include <iostream>
#include "ctor.h"
using namespace std;

Verbose::Verbose(){
	cout << "CTOR" << endl;
}


Verbose::~Verbose(){
	cout << "DTOR" << endl;
}



