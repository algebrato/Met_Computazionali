#include <iostream>
using namespace std;

struct Where{
	void am_I(){
		cout << this << endl; //l'operatore this permette di accedere a questo puntatore
	}
};


int main(){
	Where w;
	cout << &w << endl;
	w.am_I();
}




