void funz(int i); //dichiarazione, sto dicendo, che prima o poi esisterà una cosa fatta così, non viene generato codice
void funz(double d); //posso fare l'overload perchè da una parte ho funzi ... dall'alrta funzd
/*double funz(double d);*/ //<- questa ha la stessa segnatura di quella sopra! Perchè nella segnatura c'è solo quello che entra non cosa restituisce



void funz(int p){

}

void funz(double d){

}


int main(){
	
	funz(4);

}





