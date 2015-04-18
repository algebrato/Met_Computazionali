// set e map sono container "node based" -> no accesso random
// NON sono sequence cpontainer 
// sono container "ordinati" 
// set è un "insieme" che non ammette duplicati, nel senso che non posso insierire due oggetti "UGUALI" tra loro

#include <set>
#include <map>
#include <string>
#include <iostream>
using namespace std;

struct Widget{
	int a;
	Widget(int i) : a(i) {};
	bool operator < (const Widget &w) const {return (a<w.a); }
};


//gli unodrdered_set usano una hash function
//-> complessità costante per la ricerca



int main(){

	set<int> s;
	s.insert(4);
	s.insert(5);
	s.insert(6);
	s.insert(4);

	cout << s.size() << endl; //size ce l'hanno tutti i container.//sarà veloce per container sqquienziali, sarà molto lenta per una list o raba così
	cout << s.count(4) << endl;	

	//perchè usare set? perchè così non problemi con gli IF. --> usa il binary search tree
	//
	//una ricerca in un set (che è quello che fa insert) richiede un tempo che è O(logN)
	
	set<Widget> sw;
	sw.insert(Widget(3));//ERROREEEE di tipo :  no match for ‘operator<’ in ‘__x < __y’ .. è necessaria una realzione di ordinamento	
	
	map<int,string> m;
	m[5] = "ciao";
	m[11] = "hello";
	m[11] = "ciao"; //sovrascrive la chiave 11


	cout << m[11] << endl; //questi container si chiamano container associativi.
}
