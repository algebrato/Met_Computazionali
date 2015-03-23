#include <iostream>
using namespace std;

//stampo parametrico di un tipo

//timbro // Stampo 
//ciò che segue  è un template , cioè una classe generica parametrizzata da un parametro T. E' usatissimo usare T come il tipo parametrico
template < typename T > // --> struct pait_"TIPO" il tipo è T
class myPair {
	T x_,y_; //due variabili provate di tipo T generico
public:
	myPair(T x=0, T y=0) : x_(x), y_(y){};
	T get_x() {return x_;}
	T get_y() {return y_;}
};


//non genero codice, sto parlando al compilatore come si deve comportare in tutta una classe di casi,
//

//myPair non è un tipo, è un template con cui io posso costuire tipo


int main(){
	myPair<int> p;
	myPair<int> c(1,2);
	myPair<double>d(3.4,5.5);
	cout << p.get_x() << " " << p.get_y() << endl;
	cout << d.get_x() << " " << d.get_y() << endl;	


	c=p; //posso farlo!
	//c=d non posso farlo! Due TIPI diversi

}
