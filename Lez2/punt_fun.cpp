#include <iostream>
using namespace std;


void hello(){ cout << "hello world" << endl; }


int main(){


	//voiglio ottenere l'indirizzo di memoria su cui è stanziato il codice della funzione hello
	cout << (long *)&hello << endl; //viene fatto un cast per vedere se esiste o meno allora lo ricasto a long * e vedo l'esadecimale
	cout << (long *)&main << endl;


	return 0;

}
