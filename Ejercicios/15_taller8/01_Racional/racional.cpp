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

Racional::Racional (const Racional &ra1, const Racional &ra2){
    num = ra1.num * ra2.den;
    den = ra1.den * ra2.num;
    Racional::simplify();
}

Racional::Racional (const Racional &ra1, int den0){
    num = ra1.den ;
    den = den0 * ra1.num;
    Racional::simplify();
}

Racional::Racional (int num0, const Racional &ra2){
    num = num0 * ra2.den;
    den = ra2.num;
    Racional::simplify();
}

Racional::Racional (int mix0, int num0, int den0){
    num = num0+(mix0*den0);
    den = den0;
    Racional::simplify();
}

Racional::Racional(const Racional &other){
    num = other.num;
    den = other.den;
    Racional::simplify();
}

/*==========================ACCESSOR_METHODS============================*/
int Racional::get_num() const{
    return num;
}

int Racional::get_den() const{
    return den;
}

float Racional::flot() const{
    float num0 = num, den0 = den;
    float flot = num0/den0;
    // std::cout << flot << std::endl;
    return flot;
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
std::ostream &operator<<(std::ostream &os, Racional & a){
  os << a.get_num() << "/" << a.get_den();
  return os;
}

std::istream &operator>>(std::istream &is, Racional & a){
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
    double aN = a.get_num(),bN = b.get_num(), aD = a.get_den(), bD = b.get_den();
    double tA = (aN/aD), tB = (bN/bD);
    return (tA <= tB);
}

bool operator>=(Racional & a, Racional & b){
    double aN = a.get_num(),bN = b.get_num(), aD = a.get_den(), bD = b.get_den();
    double tA = (aN/aD), tB = (bN/bD);
    return (tA >= tB);
}

bool operator<(Racional & a, Racional & b){
    double aN = a.get_num(),bN = b.get_num(), aD = a.get_den(), bD = b.get_den();
    double tA = (aN/aD), tB = (bN/bD);
    return (tA < tB);
}

bool operator>(Racional & a, Racional & b){
    double aN = a.get_num(),bN = b.get_num(), aD = a.get_den(), bD = b.get_den();
    double tA = (aN/aD), tB = (bN/bD);
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
