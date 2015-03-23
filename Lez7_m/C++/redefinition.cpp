struct Base {
	int i;
	void funz(){};


};

struct Derived : public Base {
	int i;          //è un altro i !!!!
	void funz(){};  //è un altra funz, ridefinita
};


int main(){
	Derived d;
	d.i;        //d è quello di derived
	d.funz();   //funz è quella di derived ... sovrascrivo quella della base!!!! Nascondo quelle della base

	d.Base::funz();
	d.Base::i;

}




