#include <iostream>
using namespace std;




int main(){
	double *pd;
	pd = new double;

	*pd = 4.4; 
	
	cout << pd << endl;

	delete pd;

	cout << pd << endl; //uhmmm


	//altro problema è il leak di memoria.
	

	double * pda = new double[5];
	delete [] pda; //sintassi diversa per gli array




	return 0;


}


