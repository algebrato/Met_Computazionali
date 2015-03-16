#include <iostream>
using namespace std;


struct Base {
	Base(){ cout << "BASE::CTOR" << endl; };
	~Base(){cout << "BASE ::DTOR" << endl; };

};



struct Derived  : public Base {
	Derived(){cout <<"derivaed::CTOR" << endl;};
	~Derived(){cout << "derived::DTOR" << endl;};

};




int main(){
	Derived d;
}
