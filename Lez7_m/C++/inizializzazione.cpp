typedef unsigned int UI;

class Veicolo {
	private:
		UI n_ruote_;
	public:
		Veicolo() {};
		Veicolo(UI n) : n_ruote_(n) {};
};

class Bici : public Veicolo {
	public:
		Bici() : Veicolo(2) {}; 

};



int main() {
	Bici b;
	


}

