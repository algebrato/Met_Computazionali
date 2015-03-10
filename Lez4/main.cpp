#include "ctor.h"
#include <iostream>
using namespace std;



int main(){
	Verbose *v = new Verbose(); //alloca memoria e resitutisce un puntatore

	cout << "--------------------" << endl;

	delete v;

}
