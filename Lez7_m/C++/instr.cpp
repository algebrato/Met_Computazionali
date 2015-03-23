#include <iostream>
using namespace std;

//in complile time non è definito, verrà definito in runtime


struct Instrument {
	Instrument() {};
	Instrument(Instrument &){
		cout << "Inst::copy" << endl;
	}

	virtual void play(){ cout << "Inst::Play" << endl; } //il virtual risolve il problema dell'upcasting e dello slicing
};

struct Piano : public Instrument {
	//Il costruttore di copie del tipo derivato NON richiama automaticamente quello della base
	Piano() {};
	Piano(Piano &) {
		cout << "Instr::Copy" << endl;
	}
	void play(){cout << "piano::play" << endl; }
};


//il polimorfismo avviene solo con referenze e puntatori
void two_notes(Instrument * i){ //è vero che risolvo lo slicing con una referenza ma non risolvo il problema dell'upcasting (a meno di mettere virtual)
	i->play(); i->play();
}

int main(){
	//Piano p;
	//two_notes(&p); //qui suono strumento, non piano!
	              //accade un UPCASTING, un oggetto di tipo derivato viene interpretato come un oggetto base.
		      //SLICING: viene chiamato il copy constructor della base, SOLO quello della base non quello della derivata.

	Instrument *pi;
	pi = new Piano;

	two_notes(*pi);
}





