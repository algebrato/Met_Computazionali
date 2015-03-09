// ESERCIZIO - gestore di processi, scrivere una classe process che abbia una variabile privata di tipo status e lo status sia un enum con certi stati
//
//
// scrivere i metodi get e set per status e scrivere una funzione bool same_status che vuole in input un processo. Il check va fatto tra il processo sui creato e quello che gli viene passato
//
//

#include <iostream>
using namespace std;

enum Status {run, idle, stopped};

class Process {
	Status s_=run;

	public:
	Status get(){
		return s_;
		
	}
	void set(Status s){
		s_ = s;
	}

	bool same_status(){
		if(s_==(*this).get()){
			cout<< "stato uguale" << endl;
			return 144;
		}else{
			cout << "stato cambiato" << endl;
			return 143;
		}
	}
};



int main(){
	Process pro;
	pro.set(idle);
	cout << pro.get() << endl;
	pro.same_status();
}

