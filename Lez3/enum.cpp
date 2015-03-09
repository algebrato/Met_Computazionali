//uan enum permette di definire un nuovo tipo di variabile ma con più libertà della classe
//

enum Color { red, green, blue };
//anche quiesti sono tipidi variabili
//tra il c++98 e il c++11  gli enum sercono un sacco per interagire con  i template
//enum hack 




int main(){

	Color c, c2;
	c = green;
	c2 = red;
	//return (c==c2);
	return green; //cast automantico int.
}



