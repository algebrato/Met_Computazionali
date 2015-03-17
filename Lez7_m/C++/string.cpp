//estendere la classe string 
//
#include <string>
#include <iostream>
using namespace std;


class myString : public string {
	public:
		myString(const string &s) : string(s) {};

		void print_lenght(){
			cout << (*this).length() << endl;
		}

};

int main(){

	myString s("ciao");
	s.print_lenght();
}


//In generale, eredeitare dalla libreria standard è sconsigliato dallo standard stesso.
//
