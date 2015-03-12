#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

#ifndef COMPLEX_HPP
#define COMPLEX_HPP

class Complex {
	private:
		double _re, _im, _mod, _theta;
	public:
		Complex(double re = 0, double im = 0){ //Costruttore di default
		        _re = re; 
		        _im= im;
			_mod = pow(re*re+im*im,0.5);
			_theta=atan(im/re);
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
			_mod = pow(re*_re+_im*_im,0.5);
			_theta = atan(im/re);
		}

		double get_re(){
			return _re;
		}	
		double get_im(){
			return _im;
		}
		double get_mod(){
			return _mod;
		}
		double get_theta(){
			return _theta;
		}

		double print_cart(){
			cout << _re << "+i*" << _im << endl;
		}

		double print_ex(){
			cout << "(" << _mod << ")" << "e^(i*" << _theta << ")" << endl;  
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
		
		Complex operator*(const Complex &dx) const {
			return Complex( _re * dx._re - _im*dx._im,  _re*dx._im + _im*dx._re);
		}

		Complex operator*(double &d) const {
			return Complex(_re*d, _im*d);
		}


		Complex inverso() const {
			return Complex(_re/(_re*_re+_im*_im), -_im/(_re*_re+_im*_im)); 
		}

		//Booleani di uguaglianza
		//
		bool operator==(const Complex &dx){
			return _re==dx._re && _im==dx._im;
		}

};
#endif

