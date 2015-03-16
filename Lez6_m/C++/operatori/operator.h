#ifndef __OPER__HPP
#define __OPER__HPP



class Number {
	private:
		int i_;
	public:
		Number(int i) : i_(i) {};
		int get() const {return i_;}
		Number operator+ (Number rhs){
			return Number(i_ + rhs.i_);
		}
		bool operator==(const Number rhs){
			return i_ == rhs.i_;
		}

		Number & operator = (Number rhs){ //qui ci interessa il side effect, non tanto quello che ritorna
			i_ = rhs.i_;
			return *this;
		} //questo mi permette di fare le catene di =  ... a=b=c

		//l'operatore = può essere solo un membro.
		//sono solo 3 .... = , le (), le [] e ->       =, (), [], -> 
		//

} ;

/*Number operator+ (Number lhs, Number rhs){
	return Number(lhs.get() + rhs.get()); //devo usare l'access function perchè non è un memebro
};
*/

#endif

// operator + // + la funzione operatore +  con una sua certa segnatura e un suo certo ritorno. E' una funzione binaria 

//sarà fatta così: Number operator + (Number lhs, Number rhs)

