/*suppiano di avere una funzione che fa la somma di due numeri interi*/

#include <iostream>
using namespace std;

int piu(int a, int b =0 ){ //sto dicendo che, se il secondo parametro non viene dato è zero. Una sorta di modo per fare overloading

	return a+b;
}





int main(){
	
	int a,b;

	a=piu(3,6);
	b=piu(6);

	cout << a << " " << b << endl;
	

	return 0;
}
