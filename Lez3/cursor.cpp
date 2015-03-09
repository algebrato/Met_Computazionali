//ssuponiamo che sia una cosa che controlla la posizione del cursose un a ipotetica GUI
//

#include<iostream>
using namespace std;

struct Cursor {
	long pos_x, pos_y;
	void move(long x, long y); //dichiarazione in uno scope che non è globale

};


void Cursor::move(long x, long y){
	pos_x = x;// in modo equivalente (*this). pos_x =x ;
	pos_y = y;// equivalente a this->pos_y = y; //l'operatore freccetta ha il puntatore, un menbro del puntatore, lo derefenzia e ne estrea il membro.
}




int main(){
	Cursor c, r;
	c.move(4,5);
	cout << c.pos_x << "  " << c.pos_y << endl;
	
	Cursor *pc; //ma questo non punta da nessuna parte
	pc = new Cursor;
	pc->move(7,8);
	cout << pc->pos_x << "  " << pc->pos_y << endl;
	

}
//se volessi imporre un solo Cursor potrei fare un "singleton".





