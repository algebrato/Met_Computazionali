#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

class Wid {
	int val_;
public:
	Wid(int i) : val_(i) {};
	int get() const { return val_;}
	/*bool operator<(const Wid &dx) const {
		return val_<dx.val_;
	}*/
};

//posso specificare un predicato binario
bool wcomp(const Wid & w1, const Wid & w2){
	return w1.get() < w2.get();
}




int main() {
	vector<Wid> v = {1,2,6,7,3,8,9};
	sort(v.begin(),v.end(),wcomp);//questa roba non va perchè non è definito l'operatore < ! 
				      //Sort però permette di passargli anche un terzo parametro, in cui specificare IL MODO CON CUI CONFRONTARE DUE OGGETTI
				      //Sort vuole un predicato binario
	return 0;
}

