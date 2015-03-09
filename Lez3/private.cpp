//Principi di incapsulamento



//la differenza tra una struttura e una classe è che se in una struttura, se non esplicitiamo cosa è private e cosa è pubblico di default tutto è pubblico
//La classe è tutta private



struct Widget {
	private: 
		int i_;
	public: //interfaccia
		int i;

};



class Widget2{
	//defaults to private
	//potrei però voler garantire l'acceso ad una variabile solo in lettura .. o solo in scrittura e quindi fare una separazione più fine del solo tutto private o tutto public
	
}


int main(){
	Widget w;
	w.i = 3 ;
	//w.i_ = 3 ; //non raggiungibile dall'esterno.
}






