#include <iostream>
#include <list>
#include <iterator>

using namespace std;



int main(){

	//SPLICE
	
	list<int> a = {1,2,3,4,5};
	list<int> b = {22,33,44,55,66,77} ;
	
	list<int>::iterator it= ++++a.begin();
	a.splice(it, b, b.begin(), b.end() );

	list<int>::iterator it2;
	for(it2 = a.begin(); it2!= a.end(); ++it2) cout << *it2 << endl;
	
}





