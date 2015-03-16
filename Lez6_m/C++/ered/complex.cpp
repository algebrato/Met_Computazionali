#include <iostream>
using namespace std;




struct Complex {
	double re_ , im_;

};



void print(Complex c){
	cout << c.re_ << " " <<c.im_ << endl;
};


//////// fine della libreria, voglio usare queste cose per una maia estensione della libreria


//estensione

struct myComplex : public Complex  {

	//si mantiene la compatibilità anche con le funzioni che gestiscono i coplex
	double mod2(){
		return re_*re_+im_*im_;
	}
};

int main(){

	myComplex c;

	c.re_ = 1;
	c.im_ = 2;
	print(c); 	 //posso utilizzare tutto quello di complex
	return c.mod2(); //mod2 ereditato 
			 //esempio molto stupido di ereditarietà

	//implementa il concetto di "essere come" opposto a "avere un"
	//                              is-a 	              has-a 

	//myComplex E' UN complesso, non HA UN complesso

}






