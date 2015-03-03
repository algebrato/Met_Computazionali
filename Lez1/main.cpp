#include <iostream> /* Preprocessore: Primo stadio di compilazione -E  - secondo stadio: la compilazione vera e propria -S -> trasformazione in assembly strettamente legato all'arch*/
                    /* Trasformazione dell'assembly in binario -C ...vengono messi degli ancoraggi in cui poi, in fase di linkaggio andranno attaccati i finari delle librerie*/
#define TESTO "hello world"

using namespace std;  /* tutto quello che sta in iostream è nello spazio di nomi std*/


int main(){
	/*Alcune parole su come si compila*/
	/*Alcune parole sul return $? */

	cout << TESTO << endl;


	return 9;
}







