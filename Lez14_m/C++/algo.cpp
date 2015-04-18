#include <algorithm>
#include <numeric> //per accumulate -> prende gli iteratori di un container e li riduce ad un numero
#include <vector>
#include <list>
#include <string>
#include <iostream>
using namespace std;


int main(){
	//C++11 inizializzazione con le {}
	vector<int> v = {1,6,5,4,2,1,5,7,8,9,2,5,9};
	cout << accumulate(v.begin(),v.end(),0) << endl;
	vector<string> p = {"ciao","pippo","pero"};
	list<int> l =  {1,6,5,4,2,1,5,7,8,9,2,5,9};

	//la stdlib ha un sort figo //ordina un vector (o un deque)
	std::sort(v.begin(),v.end());
	std::sort(p.begin(),p.end()); //ordina per numero di caratteri
	//std::sort(l.begin(),l.end()); //error: no match for ‘operator-’ in ‘__last - __first’ 
	                              //questo perchè gli iteratori di una lista non sono random access! Quindi non sanno fare "meno".
	l.sort(); //per ordinare una lista devo usare una funzione membro della classe list.

	auto it = unique(v.begin(),v.end()); //restituisce un puntatore all'ultimo valore buono
	v.erase(it,v.end());	
	
	
	cout << accumulate(v.begin(),v.end(),0) << endl;

	//	accumulate(iniz, final, val_iniz, funz)
	//	funz resituisce un long --->realizza la produttoria


	//per stampare si può susare il for auto elem
	for(auto & elem : v) //range-based loop
		cout << elem << endl; //auto elem fa delle copie, se voglio avere gli elementi veri della lista auto & elem
	cout << "" <<endl;

	for(auto & elem : l)
		cout << elem << endl;
	for(auto & elem : p)
		cout << elem << endl;
	


	return 0;


}
