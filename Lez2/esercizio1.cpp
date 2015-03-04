#include <iostream>
using namespace std;



void printaddr(double v){

	cout<<&v<<endl; //silenziosamente viene creata un altra variabile

}

void printaddr(double *v){

	cout << v << endl; //è la stessa area di memoria!!
}




void incr(int m){  //passo il valore di n ... diventa qui m ... poi finisce la funzione muore m ... n non è stata modificata
	m++;
}


void incr(int *m){
	(*m)++;
}


int main(){
	
	double v;
	int n=4;
	cout << &v << endl;

	printaddr(v);

	printaddr(&v);

	incr(n);
	cout << n << endl;

	incr(&n);
	cout << n << endl;

	return 0;
}




