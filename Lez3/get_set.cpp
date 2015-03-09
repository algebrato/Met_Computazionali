//#include <iostream>
//using namespace std;

class Number{
	int i_;

	public:
	int get() {
	       return i_;	
	}

	void set(int i){
		i_ = i;
	}
}; //lo fa inline?



int main(){
	Number n;
	n.set(5);
	return n.get();
}





//extra level of indirection //un livello extra di mediatezza tra utente e variabili
