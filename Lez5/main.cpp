#include "complex.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	Complex a;
	Complex b;
	Complex c;
	a.set(1,1);
	b.set(2,2);
	
/*	if(a==b){
		cout << "a=b" <<endl;
	}else{
		cout << "a!=b" <<endl;
	}

	if(b==c){
		cout << "b=c" <<endl;
	}else{
		cout << "b!=c" <<endl;
	}*/

	c= a.inverso();
	b= a * c ;
	cout << c.get_mod() << "  " << c.get_theta() << endl;
	c.print_cart();
	b.print_cart();
}	

