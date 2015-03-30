#include "shape.h"
#include <iostream>

using namespace std;

int main(){
	Shape *c,*d;
	Shape *s;
	
	c=new Circle;
	s=new Square;
	
	c->print();
	s->print();	
	d=c->clone();
	
	cout << "Il clone del cerchio" << endl;
	d->print();
}
