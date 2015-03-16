#include "operator.h"
#include <iostream>
using namespace std;

int main(){

	Number n(3), m(4), p(4);

	if(n==p){
		cout << "uguali" << endl;
	}else{
		cout << "diversi" << endl;
	}

	//return (n+m).get();


	//L'oeperatore uguale solitamente viene già implementalto infatti
	//
	Number r(5);
	r=n+m;
	n=m;

	n = m = r; //funziona perchè c'è una certa regola di associatività. Associatività a destra n=(m=5)


	cout << n.get() << endl;


}
