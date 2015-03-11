#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex {
	private:
		double _re, _im;
		double _mod, _theta;
	public:
		Complex(double re = 0, double im = 0){ //Costruttore di default
			_re = re, _im= im;
			cout << "Costruttore di default" << endl;
		};
		
		//Costruttore di un reale
		Complex(double re){
			_re = re;
			_im = 0;
			cout << "Costruito un reale" << endl;
		};
		
		//Costruttore di copia
		Complex(const Complex &c) : _re(c._re) , _im(c._im) {cout << "COPY" << endl;};


		void set(double re =0, double im=0){
			_re = re; _im=im;
		}

		double get_re(){
			return _re;
		}	
		double get_im(){
			return _im;
		}

		double print_cart(){
			cout << _re << "+i*" << _im << endl;
		}

		double print_ex(){
			double mod = pow(_re*_re + _im*_im,0.5);
			double theta = atan(_im/_re);
			cout << "(" << mod << ")" << "e^(i*" << theta << ")" << endl;  
		}
		

		//Operatori abbastanza scemi
		Complex operator+(const Complex &s) const {
			return Complex(_re+s._re, _im+s._im);
		}
		
		Complex operator+(double &r) const {
			return Complex(_re+r,_im);
		}
		Complex operator-(const Complex &s) const {
			return Complex(_re-s._re, _im-s._im);
		}
		
		Complex operator-(double &r) const {
			return Complex(_re-r,_im);
		}

		//Operatori un po' più complicati

		const Complex &operator+=(const Complex &dx){
			_re += dx._re;
			_im += dx._im;
		
			return *this; //ok funza
		}

		//Booleani di uguaglianza
		//
		bool operator==(const Complex &dx){
			return _re==dx._re && _im==dx._im;
		}
};
#endif

