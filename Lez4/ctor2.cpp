class Window{
	int w_, h_;
	public:
		Window(int w = 0 , int h = 0 ){ //con l'=0 diventerebbe quello di default
			w_ = w; h_=h;q
		}
		Window() : w_(0), h_(0) {}; //cotruttre di default	
};

//lista di inizializzazione
Window::Window(int w, int h) : w_(w), h_(h) { //richiamo il costruttore di w_ e lo inizializzo a w , richiamo il costruttore di h_ e lo inizializzo a h. Se non lo avessi afatto avrei dovuto costruire prima l'oggetto e poi assegnare il valore alle due variabili
	w_ = w; h_=h;

}







int main() {
	Window w(100,100);
	long l(10); //pseudocostruttore, long l = 10 .. uguale
}
