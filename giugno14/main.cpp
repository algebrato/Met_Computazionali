#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
using namespace std;

class Sequence{
    std::vector<int> v_ = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    std::vector<int> seq_;
    int a_,b_,c_;

public:
    //CTOR
    Sequence(int a=0, int b=0, int c=0) : a_(a), b_(b), c_(c){
        for(int i=0; i<16; ++i){
            int val = a*v_[i] + b*v_[i]*v_[i] + c*v_[i]*v_[i]*v_[i];
            seq_.push_back(val);
        }
    };

    //CopyCTOR
    Sequence(const Sequence &c) : a_(c.a_), b_(c.b_), c_(c.c_), seq_(c.seq_){};

    virtual void print(){
        cout << "Print della sequenza:" << endl;
        for(auto & elem : seq_)
            cout << elem << endl;
    }

    int operator*(Sequence &destra) const {
        int prod=0;
        for(int i=0;i < 16; ++i){
            prod+=seq_[i]*destra.seq_[i];
        }
        return prod;
    }
};

/*class BinarySeq : public Sequence {
public:
    BinarySeq(const Sequence &s) : Sequence(s) {
        for(int i=0; i<16;i++){
            if(rand()<0.5){
                s.seq_.push_back(0);
            else
                s.seq_.push_back(1);
            }

        }
    }

};
*/


int main()
{
    Sequence a(1,0,0);
    Sequence b(0,0,1);
    int c;
    int d;

    c = a*b;
    d = b*a;

    cout << "stampa di A*B" << endl;
    cout << c << endl;

    cout << "stampa di B*A" << endl;
    cout << d << endl;

/*    Sequence *bin;
    bin=new BinarySeq;

    bin->print();
*/

    return 0;
}


