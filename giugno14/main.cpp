#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
using namespace std;

class Sequence{
    std::vector<int> v_ = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int a_,b_,c_;
    std::vector<int> seq_;
public:

    //CTOR
    Sequence(int a=0, int b=0, int c=0) : a_(a), b_(b), c_(c){
        for(int i=0; i<16; ++i){
            int val = a*v_[i] + b*v_[i]*v_[i] + c*v_[i]*v_[i]*v_[i];
            seq_.push_back(val);
        }
    };

    //CopyCTOR
    explicit Sequence(const Sequence &c) : a_(c.a_), b_(c.b_), c_(c.c_), seq_(c.seq_){};

    virtual void print(){
        cout << "Print della sequenza generale:" << endl;
        for(auto & elem : seq_)
            cout << elem << endl;
    };

    int operator*(Sequence &destra) const {
        int prod=0;
        for(int i=0;i < 16; ++i){
            prod+=seq_[i]*destra.seq_[i];
        }
        return prod;
    }
};

class BinarySeq : public Sequence {
    std::vector<int> seqb_;
public:

    BinarySeq(int a=0, int b=0, int c=0, int d=0){

       for(int i=0;i<16;i++){
           double a = (double) rand() / RAND_MAX ;
           if(a<0.5) seqb_.push_back(0);
           else seqb_.push_back(1);
       }
   };
    explicit BinarySeq(const BinarySeq &bs) : seqb_(bs.seqb_){};

    BinarySeq(std::vector<int> seqnew) : seqb_(seqnew){};
    void print(){
       cout << "Print della sequenza binaria:" << endl;
       for(auto & elem : seqb_)
           cout << elem << endl;
    }
    std::vector<int> get_bin_vector(){
       return seqb_;
   }
};

void Not( Sequence * bs) {
    std::vector<int> vettorenot;
    std::vector<int> seqiniz =bs->get_bin_vector();

    for(std::vector<int>::iterator it=seqiniz.begin() ; it != seqiniz.end(); ++it){
        if(*it = 1){
            vettorenot.push_back(0);
        }else{
            vettorenot.push_back(1);
        }

    }
    //return  new Sequence(vettorenot);
};






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

    Sequence *bin;
    bin=new BinarySeq;
    a.print();
    bin->print();



    return 0;
}
