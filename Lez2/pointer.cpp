/*Esemio 2 sui puntatori**/

#include <iostream>
using namespace std;


int main(){

	int n = 4;
	double d = 5.5;

	//&n --> tipo? sono di (int *) ---> l'indirizzo di memoria che vado a definitre è un'area di memoria di un intero
	//&d --> ??? tipo?? sono di tipo (double *) ---> &d è l'area di memoria di un double.
	

	int * pi;
	double * pd;
	
	pi = &n;
	pd = &d;

	//pi=&d;
	
	*pi =123; //questo è un intero
	*pd =30.5;

	//aliasing
	cout << n << endl;
	cout << d << endl;

	return 0;
}
