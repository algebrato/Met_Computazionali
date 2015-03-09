//L'idea dell'aggregazione,
//supponiamo di volere una funzione che ritorni un punto all'interno di un cerchio di raggio unitario
//what's a point? Un punto identificato dalle sue coordinate, quindu una funzione che resistituisca due numeri reali. Ma il return è unico. Ergo ritorno una struttura
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;
//Strutture -> nuovi tipi di variabile che possono aggreare più varibili

struct Point {
	double x;
	double y;
};
//costruzione un nuovo tipo di variabile
//Oltre alle variabili posso agglomerare anche le funzioni che ne determiano il suo comportamento.

Point ran_point(){
	Point a;
	a.x =1 ; a.y=1;
	while((a.x*a.x + a.y*a.y)>0.5*0.5 ){
		a.x=drand48()-0.5;
		a.y=drand48()-0.5;
	}
	return a;
}

int main(){
	Point p;
	p=ran_point();
	cout << p.x << "  " << p.y << endl;
}

// i++ = incrementa la variabile  i e restituiscono il risultato PRIMA che venga incrementato
// ++i = restituisce il valore già incrementato


