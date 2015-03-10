#include <iostream>
using namespace std;


struct Huge{
	//tanti dati array di 10^5 double
	//due funzioni by_val e by_ref valotare le prestazioni
	double p[100000];

};



double by_ref(Huge & h){
	double d;
	d = h.p[50000];
	return d;
}


double by_val(Huge h){
	double d;
	d = h.p[50000];
	return d;
}



int main(){
	double d;
	Huge *h = new Huge;
	
	for(int i=0; i<100000; i++) h->p[i]=i;
	
	for(int i=0; i<1000000000; i++) d=by_val(*h); //dopo 1m29s ho stoppato e non aveva ancora finito
	
	//for(int i=0; i<1000000000; i++) d=by_ref(*h); //ci mette 5sec.
	cout << d << endl;

}




