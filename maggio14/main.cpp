#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
using namespace std;

class Matrix {
protected:
    double a_,b_,c_,d_;
public:
    //CTOR-default(Id)
    Matrix(double a=1, double b=0, double c=0, double d=1) : a_(a), b_(b), c_(c), d_(d) {
        cout << "CTOR MATRIX" <<endl;
    };

    //Operator Overloading
    Matrix operator*(const Matrix &dx) const {
        double aa = a_*dx.a_ + b_*dx.c_;
        double bb = a_*dx.b_ + b_*dx.d_;
        double cc = c_*dx.a_ + d_*dx.c_;
        double dd = c_*dx.b_ + d_*dx.d_;
        return Matrix(aa,bb,cc,dd);
    }

    void print(){
        cout <<"|"<< a_ << "   " << b_ << "|" << endl << "|" << c_ << "   " << d_ << "|" << endl;
    }

    int Det(){
        return(a_*d_-b_*c_);
    }

};


class RandomMatrix : public Matrix {
public:
    RandomMatrix(){
        a_ = drand48();
        b_ = drand48();
        c_ = b_;
        d_ = drand48();
    };

};


bool ord(Matrix *v1, Matrix *v2){
    return v1->Det() < v2->Det();
}

int main()
{
    Matrix a(1,2,3,4);
    Matrix ai;
    Matrix ia;
    Matrix Id;

    ai = a*Id;
    ia = Id=a;

    cout << "A*Id" << endl;
    ai.print();

    cout << "Id*A" << endl;
    ia.print();

    cout << "Det(A)= " << a.Det() << endl;

    cout << "PROVAAAA" << endl;

    vector<Matrix*> v;
    v.push_back(new Matrix);
    v.push_back(new Matrix(0,1,1,0));
    for(int i=1; i<=10; ++i)
        v.push_back(new RandomMatrix);

    std::sort(v.begin(), v.end(), ord);

    for(auto elem : v){
        cout << elem->Det() << endl;
    }

    for(int i=0; i<10; ++i){
        delete(v[i]);
    }

    return 0;
}
