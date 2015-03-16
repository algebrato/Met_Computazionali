

//gli operatori sono syntactic sugar (causes cancer of the semicolon )  -- overloading degli operatori
//


#include <iostream>
using namespace std;

int main(){
	
	int n = 10;
	while (n-->0)  //--> sintassi viola la semantica ! 
		cout << n <<endl; 


}


