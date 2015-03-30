#include <iostream>
#include <string.h>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;


//fare una classe Noise che contenesse una risorsa ...(un pezzo di memoria)


typedef char data_t;
typedef unsigned int UI;


template <unsigned int N> class Noise{  //non-type template parameters si possono usare solo tipi discreti (nulla double ecc)
	data_t * mem_;			//abbiamo bisogno di tener traccia del fatto che l'oggitto sia valido o meno
	bool is_valid;
	//helper function
	void copy_(const Noise & n) { //copia la memeoria 
		memcpy(mem_, n.mem_, N*sizeof(data_t));
	}
public:
	Noise() : is_valid(true) {
		mem_ = new data_t[N];
		for(UI i =0; i<N; ++i) mem_[i]= 65+floor(drand48()*(90-65)); 
	};

	~Noise() {
		if(is_valid) delete [] mem_;
	};

	//Costruttore di copie
	Noise(const Noise & n) {
		is_valid = false;
		if(n.is_valid) {
			mem_ = new data_t[N];
			is_valid = true;
			copy_(n);
		}
	}

	Noise & operator= (const Noise& n){
		if(is_valid && n.is_valid) copy_(n);
		return *this;
	}
	
	//move
	void move(Noise & n){
		if(n.is_valid){
			if(is_valid) delete [] mem_;
			mem_ = n.mem_;
			n.is_valid = false;
			is_valid = true;
		}
	}

	void swap(Noise & n){
		data_t * tmp_p = mem_;
		bool tmp_s = is_valid;
		mem_ = n.mem_;
		is_valid = n.is_valid;
		n.is_valid = tmp_s;
	}

	void print(){
		if(is_valid) for(UI i=0; i<N; ++i) cout << mem_[i];
		else cout << "Oggetto non valido";
		cout << endl;
	}
};

int main() {
	Noise <6> a,b;

	a.swap(b);
	a.print(); b.print();
}


 
