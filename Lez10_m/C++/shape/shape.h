#include <iostream>
using namespace std;



struct Shape{
	public:
		virtual void print() const = 0;
		virtual Shape* clone() const = 0;
};

struct Circle : public Shape{
	public:
		Circle() {cout << "Cerchio costruito"<<endl;}
		void print() const {cout << "Sono un cerchio" << endl; }
		Shape clone() const { return new Circle(*this)}

};

struct Square : public Shape{
	public:
		Square(){cout <<"Quadrato costruito"<<endl;}
		void print() const {cout << "Sono un quadrato" << endl;}
		Shape clone() const { return new Square(*this)}
};

