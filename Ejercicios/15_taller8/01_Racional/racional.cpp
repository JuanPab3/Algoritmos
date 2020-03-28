#include "racional.hpp"

/*===============================PRIVATE===============================*/
int Racional::gcd(){
    long gcd, tmp, rest;
    gcd = abs(num);
    tmp = den;
    while (tmp > 0) {
        rest = gcd % tmp;
        gcd = tmp;
        tmp = rest;
    }
    return gcd;
}

void Racional::simplify(){
    int gcd = Racional::gcd();
    num /= gcd;
    den /= gcd;
    if (num < 0 and den < 0){
        num *= -1;
        den *= -1;
    }
}
/*======================CONSTRUCTORS_&_DESTRUCTOR======================*/
Racional::Racional (){
    num = 0;
    den = 1;
    Racional::simplify();
}

Racional::Racional (int num0){
    num = num0;
    den = 1;
    Racional::simplify();
}

Racional::Racional (int num0, int den0){
    num = num0;
    den = den0;
    Racional::simplify();
}

Racional::Racional (int mix0, int num0, int den0){
    num = num0+(mix0*den0);
    den = den0;
    Racional::simplify();
}
/*==========================ACCESSOR_METHODS============================*/
int Racional::get_num(){
    return num;
}

int Racional::get_den(){
    return den;
}
/*==========================MODIFIER_METHODS===========================*/
void Racional::set_rac(int num0, int den0){
    den = den0;
    num = num0;
    Racional::simplify();
}

void Racional::set_num(int num0){
    num = num0;
    Racional::simplify();
}

void Racional::set_den(int den0){
    den = den0;
    Racional::simplify();
}
/*========================OPERATORS_OVERLOADING========================*/
ostream &operator<<(ostream &os, Racional & a){
  os << a.get_num() << "/" << a.get_den();
  return os;
}

istream &operator>>(istream &is, Racional & a){
    int num0,den0;
    is >> num0 >> den0;
    a.set_num(num0) ;a.set_den(den0);
    return is;
}

bool operator==(Racional & a, Racional & b){

    bool num = a.get_num() == b.get_num();
    bool den = a.get_den() == b.get_den();

    return num and den;
}

bool operator!=(Racional & a, Racional & b){

    bool num = a.get_num() != b.get_num();
    bool den = a.get_den() != b.get_den();

    return num or den;
}

bool operator<=(Racional & a, Racional & b){
    double tA = (a.get_num()/a.get_den()), tB = (b.get_num()/b.get_den());
    return (tA <= tB);
}

bool operator>=(Racional & a, Racional & b){
    double tA = (a.get_num()/a.get_den()), tB = (b.get_num()/b.get_den());
    return (tA >= tB);
}

bool operator<(Racional & a, Racional & b){
    double tA = (a.get_num()/a.get_den()), tB = (b.get_num()/b.get_den());
    return (tA < tB);
}

bool operator>(Racional & a, Racional & b){
    double tA = (a.get_num()/a.get_den()), tB = (b.get_num()/b.get_den());
    return (tA > tB);
}

Racional operator+(Racional & a, Racional & b){
    int newnum, newden;
    newnum = (a.get_num()*b.get_den())+(b.get_num()*a.get_den());
    newden = a.get_den()*b.get_den();
    Racional c(newnum,newden);
    return c;
}

Racional operator+(Racional & a, int i){
    int newnum, newden;
    newnum = a.get_num()+(i*a.get_den());
    newden = a.get_den();
    Racional c(newnum,newden);
    return c;
}

Racional operator-(Racional & a, Racional & b){
    int newnum, newden;
    newnum = (a.get_num()*b.get_den())-(b.get_num()*a.get_den());
    newden = a.get_den()*b.get_den();
    Racional c(newnum,newden);
    return c;
}

Racional operator-(Racional & a, int i){
    int newnum, newden;
    newnum = a.get_num()-(i*a.get_den());
    newden = a.get_den();
    Racional c(newnum,newden);
    return c;
}

Racional operator*(Racional & a, Racional & b){
    int newnum, newden;
    newnum = a.get_num()*b.get_num();
    newden = a.get_den()*b.get_den();
    Racional c(newnum,newden);
    return c;
}

Racional operator*(Racional & a, int & i){
    int newnum, newden;
    newnum = a.get_num()*i;
    newden = a.get_den();
    Racional c(newnum,newden);
    return c;
}

Racional operator/(Racional & a, Racional & b){
    int newnum, newden;
    newnum = a.get_num()*b.get_den();
    newden = a.get_den()*b.get_num();
    Racional c(newnum,newden);
    return c;
}

Racional operator/(Racional & a, int & i){
    int newnum, newden;
    newnum = a.get_num();
    newden = a.get_den()*i;
    Racional c(newnum,newden);
    return c;
}
/*=====================================================================*/
