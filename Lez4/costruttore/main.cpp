#include "ctor.h"
#include <iostream>
using namespace std;



int main(){
	
	Verbose *prova;
	prova = new Verbose();	
	cout << "---------------------" << endl;

	prova->by_ref(* prova);

	cout << "---------------------" << endl;

	//prova->by_val(*prova); //fallisce perchè ho definito il costruttore di copia come explicit

	cout << "---------------------" << endl;
	
	//prova->factory();
	
	cout << "---------------------" << endl;

	Verbose *prova_copy;

	prova_copy = new Verbose(*prova);
}
