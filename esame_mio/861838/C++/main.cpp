#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

class Ball {
private:
    double vx_;
    double vy_;
    double m_;
public:
    Ball(double m=1, double vx=1, double vy=1) : m_(m), vx_(vx), vy_(vy){};

    double energy(){
        double E;
        E=0.5*m_*(vx_*vx_+vy_*vy_);
        return E;
    }

    void print(){
        double E;
        E=this->energy();
        cout << "vx = " << vx_ <<endl;
        cout << "vy = " << vy_ <<endl;
        cout << "Energy = " << E << endl;

    }

    void change_speed(double Ratio){
        vx_ = Ratio*vx_;
        vy_ = Ratio*vy_;
    }

};

class Bumper {
private:
    double mu_;
public:
    Bumper(double mu) : mu_(mu){};
    virtual void bounce(Ball &palla){
        double ratio=pow(mu_,0.5);
        palla.change_speed(-1*ratio); //va variare l'energia di mu e inverte la direzione
    }



};


class ThresholdBumper : public Bumper{
private:
    double eps_;
public:
    ThresholdBumper(double eps) : Bumper(1.5) {
        eps_=eps;
    }

    void bounce(Ball &palla){
        if(palla.energy()<eps_){
            palla.change_speed(-1.);
        }else{
            palla.change_speed(-1*pow(1.5,2));
        }
    }
};

//Non mi funziona//
/*
void flipper(Ball & ball, std::vector<Bumper *> v){
    for(int i=0; i<10; ++i){
        v[i]->bouce(ball);
    }
}
*/


int main(){

    std::vector<Bumper *> v1;
    std::vector<ThresholdBumper *> v2;
    double rand1;
    double rand2;
    for(int i=1; i<=10; ++i){
        rand1 = drand48() * 2 + 1;
        rand2 = drand48() * 5;
        v1.push_back(new Bumper(rand1));
        v2.push_back(new ThresholdBumper(rand2));
    }


    Bumper b(2);
    ThresholdBumper tb(10);
    Ball a(1,1,1);
    a.print();

    b.bounce(a);
    a.print();

    tb.bounce(a);
    a.print();

    Ball a_in_flipper();

    //flipper(a_in_flipper(),v1);
    //flipper(a_in_flipper(),v2);

    for(int i=0; i<10; ++i){
        delete(v1[i]);
        delete(v2[i]);
    }

    return 0;
}
