#include <iostream>
using namespace std;


void hello(){ cout << "hello world" << endl; }


int main(){


	//voiglio ottenere l'indirizzo di memoria su cui è stanziato il codice della funzione hello
	cout << (long *)&hello << endl; //viene fatto un cast per vedere se esiste o meno allora lo ricasto a long * e vedo l'esadecimale
	cout << (long *)&main << endl;

	//oppure
	
	cout << reinterpret_cast<long*>(&hello) << endl;
	cout << reinterpret_cast<long*>(&main) << endl;

	//questo indirizzo possiamo metterlo in una variabile, come gli int*, i puntatori a zone di memoria dove vivono parti di codice è:
	
	// void (*pf)(); // puntatori a funzione. pf è un puntatore ...il fatto che sia tra parentesi è un puntatore a funzione, che ritorna un void e che non vuole nessun parametro

	void (*pf)() = &hello;

	(*pf)(); //--> tipo di comportamento usato dal C per fare polimorfismi e simulare un po' il tipo di paradigma OO

	//libsigc++ -> implementa un po' di robe tipo segnali



	return 0;

}
