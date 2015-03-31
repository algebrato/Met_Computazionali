#include <vector>
#include <iterator>
#include <iostream>

using namespace std;



int main(){

	vector<int> v;
	vector<int>::iterator it;
	

	for(int i=0; i<10; ++i) v.push_back(i);

	//ma se ho un iteratore definito come:
	vector<int>::iterator it2 = v.end()-4;  //--->	faccio un insert, che succede??? Viene INVALIDATO, nel senso che non so cosa vale
	
	cout << &it2 << endl;
	v.insert(v.begin()+3,99); //attenzione alla complessità
	cout << &it2 << endl;




	for(it = v.begin(); it != v.end(); ++it) cout << *it << endl;
	//meglio usare != perchè end() è un iteratore alla posizione SUCCESSIVA all'ultima
	

	

}
