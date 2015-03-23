#include <iostream>
using namespace std;


//all'intertno del tempale posso usare funzioni memmbro del tipo che vado a definire.....??
//passaggio da "interfacce esplicite" (ereditarietà)

template <typename T>
struct X {
	T t;
	X(T tt) : t(tt) {} 
	void print_length(){
		cout << t.length() << endl;
	}

}; //finisce qui template



int main(){
	//col main vuoto il programma compila! anche se ho usato .lenght. 
	//finche non vado esplicitamente a definirla, tutti il typechecking viene del tutto posticipato
	//posso definire un tipo che non ha magari una funzione lenght....
	//X<int> p(4); //<-- lo inizializzo col 4 ... che è un intero! ... ma nel print lenght ho una funzione membro di un altro tipo
	//x.print_lenght(); // ERRORE!!!
	X<string> x("ciao");
	x.print_length();
}


