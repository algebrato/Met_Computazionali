//un esempio di funzione ricorsiva è il fattoriale

//fattoriale: n! = n*(n-1)! + 1! = 1 ; 

#include <stdlib.h>
#include <stdio.h>

long fattoriale(short int n){

	if(n==1) return 1; //== -> no side effect ; solo il risultato della comparazione
	return n*fattoriale(n-1);
}


bool is_a_powerofk(long n){

}

//non ricorsivo
bool is_a_powerof2(long x){
	return (x != 0 ) && ((x & (x - 1)) == 0);
}

//ricorsivo
int is_a_powerof2_r(long x){
	
	if(x==0) return 1;
	if(x==1) return 2;
	return 2*is_a_powerof2_r(x-1);

}


bool is_a_powerof2_r2(float n){
	printf("%f\n",n);
	if(n == 1) return true;
	if(n < 1) return false;
	n/2;
       	is_a_powerof2_r2(n/2);

}


int main(){
	
	long f;
	bool b;
	f = fattoriale(4);

	printf("%li\n",f);
	printf("size of long: %i\n",sizeof(long));

	printf("/*********************************************/\n");

	b = is_a_powerof2(33);
	if(b==true) printf("SI\n");
	else printf("NO\n");

	printf("2^3 = %i\n",is_a_powerof2_r(3));
	
	float numero=33;
		
	b = is_a_powerof2_r2(numero);
	if(b==true) printf("Il numero %f è potenza di due\n",numero);
	else printf("Il nuemro %f non è potenza di due\n",numero);


	return 0;
}


