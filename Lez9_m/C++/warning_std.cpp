#include <iostream>

using namespace std;

//polimorfismo .... ha un comportamento che dipende dal suo tipo dinamico, che viene definito in runtime
//
//

struct Base {
	Base() {cout << "Base()" << endl; }
	virtual ~Base() {cout << "~Base()" << endl; }
};

struct Derived : public Base {
	int * pi; //sarebbe la  "risorsa" 
	Derived() { 
		cout << "Derived()" << endl; 
		pi = new int;
	}
	~Derived(){ 
		cout << "~Derived()" << endl; 
		delete pi;
	}
};



int main(){
	Base * pb;
	//voglio usare polimorficamente un oggetto di tipo derivato
	pb = new Derived; //new me ne fornisce il puntatore
	delete pb; //così viene chiamato il distruttore della chiase base, non quesllo della derived;
	           // pb è un puntatore ad un oggetto di tipo Base
		   // this is a recipe for disaster
		   // Risolvo questa cosa dicendo che il distruttore va trattato in modo polimorfico,
		   // quindi usare sempre distruttori virtuali nelle classi polimorfiche
		   // E' sempre un buon designed mettere distruttori virtual.
		   // La STL non è progettata per fornire basi polimorfiche, in particolar modo  non ha sicuramente distruttori virtual.
}





