#include <iostream>
using namespace std;

//differenze tra ereditarietà di una interfaccia ed ereditarità di una implementazione
// io qui voglio solo specificate un'interfaccia
// - una funzione "virtual pura =0" DEVE essere implementata (overriding
// - una classe che abbia almeno una virtuale pura è una classe astratta cioè non può
//   essere instaziata, e realizza il concetto di interfaccia
struct Instrument { 
	virtual void play() const = 0; //"<--" = 0 dice che è virtuale pura
	virtual void tune() const = 0;
};

void concert(Instrument & i){
	i.tune(); i.play();
}



struct Piano : public Instrument {
	void play() const {cout << "pling" << endl; }
	void tune() const  {cout << "tuning.. "<< endl; }
};



int main(){
	Piano p;
	concert(p);
}

