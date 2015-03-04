/*Introduzione ai puntatori*/
//Ogni roba sta in una parte di memoria
//
//
//Scope delle variabili -  tempo di vita (il compilatore decide quando una variabile automatica entra in gioco quando lo decide il compilatore
// auto int a --> una variabile auto muore al di fuore  dello scope in cui è racchiusa
//

//Scope globali  - scope di file
//

#include <iostream>

using namespace std;

int f1; //dura tutto il file 
double f2;

int main(){
	int m1; //qualocsa di automatico
	int array[5]; //not type safety!
	
 	/*f1 = valore della variabile
	&f1= indirizzio della variabile*/

	cout << &f1 << endl << &f2 << endl;
	cout << &m1 << endl << array << endl;


	return 0;
}





