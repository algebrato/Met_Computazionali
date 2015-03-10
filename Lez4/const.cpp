//vedere come opera const
//
//
//




enum Color {red, green, blue};

struct Person{
	private:
		Color eye;
	public:
		Person() : eye(green) {};
		Color get() const {
			//eye = blue; --> errore
			return eye;
		}
};




int main(){
	int a = 1;
	a = 4 ; //la modifico e non ho problemi

	//ma posso avere delle situazioni in cui ho la necessità che delle variabili siano sempre uguali e insierire dei constrain semantici
	
	//const int p = 1;
	//p=4; //errore!!



	//posso usare const anche per oggetti strutturati
	//
	const Person p;
	p.get(); // se cerco di fare questo...ho un errore semanticamente non problemi. Il punto è che il compilatore non è sicuro che get possa modificarlo, quindi va vatto capire che get non modiifca quindi Color get() const {....} ma se poi modifico l'oggetto ... il compilatore parsa la funzione e va a vedere cosa è stato fatto, quindi se modifico alla fine da errore.

}
