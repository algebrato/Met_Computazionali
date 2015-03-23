#include <iostream>
using namespace std;


struct NonPoly {
	void f() {};
};

struct Poly {
	virtual void f() {};
};


int main() {

	cout << sizeof(NonPoly) << endl;
	cout << sizeof(Poly) << endl; //molto più pensante a causa dell'aggiunta della tavola virtuale per effettuare il polimorfismo
}



