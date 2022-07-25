#include <iostream>
using namespace std;

class Complex{
public:
    Complex(double r=0,double i=0):real(r),imag(i){};
    friend Complex operator+(Complex &t1,Complex &t2);
    friend Complex operator+(Complex &t1,int );
    friend Complex operator+(int, Complex &t1);
    void diaplay() const;
private:
    double real,imag;
};

void Complex::diaplay() const {cout<<"("<<real<<", "<<imag<<"i)"<<endl;}

Complex operator+(Complex &t1, Complex &t2) {
    return {t1.real+t2.real,t1.imag+t2.imag};
}

Complex operator+(Complex &t1, int num) {
    return {t1.real+num,t1.imag};
}

Complex operator+(int num, Complex &t1) {
    return {t1.real+num,t1.imag};
}


int main() {
    Complex t1(2,7),t2(3,4),t3,t4,t5;
    t3=t1+t2;
    t1.diaplay();
    t2.diaplay();
    t3.diaplay();
    t4=t1+8;
    t4.diaplay();
    t5=8+t1;
    t5.diaplay();
    return 0;
}
