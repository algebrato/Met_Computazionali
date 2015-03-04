/*Ogni referenza è un puntatore che viene dereferenziato automaticamente*/


void incr(int & n){
	++n;
}




int main(){
	int i = 5;
	/*Vogliamo fare una variabile che sia una refernza a quaesta variabile interna*/

	 int & ri = i; //non centra nulla con l'& che veniva usato nei puntatori. Qui è un tipo di variabile.... referenza ad un intero (int &) che chiamo ri
	//assegno i alla referenza ri
	//

	ri = 6;
	incr(i); //i non viene passato per copia, ma per referenza.



	return i;

}





